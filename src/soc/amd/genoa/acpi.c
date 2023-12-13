/* SPDX-License-Identifier: GPL-2.0-only */

/* ACPI - create the Fixed ACPI Description Tables (FADT) */

#include <acpi/acpi.h>
#include <amdblocks/acpi.h>
#include <amdblocks/acpimmio.h>
#include <amdblocks/cpu.h>
#include <amdblocks/data_fabric.h>
#include <arch/ioapic.h>
#include <console/console.h>
#include <vendorcode/amd/opensil/genoa_poc/opensil.h>

/* TODO: this can go in a common place */
unsigned long acpi_fill_madt(unsigned long current)
{
	struct device *dev = NULL;
	while ((dev = dev_find_path(dev, DEVICE_PATH_DOMAIN)) != NULL) {
		struct resource *res = probe_resource(dev, IOMMU_IOAPIC_IDX);
		if (!res)
			continue;

		current += acpi_create_madt_ioapic_from_hw((acpi_madt_ioapic_t *)current,
						   res->base);
	}

	return current;
}

void acpi_fill_fadt(acpi_fadt_t *fadt)
{
	/* Fill in pm1_evt, pm1_cnt, pm_tmr, gpe0_blk from openSIL input structure */
	opensil_fill_fadt_io_ports(fadt);

	fadt->pm1_evt_len = 4;	/* 32 bits */
	fadt->pm1_cnt_len = 2;	/* 16 bits */
	fadt->pm_tmr_len = 4;	/* 32 bits */
	fadt->gpe0_blk_len = 8;	/* 64 bits */

	fill_fadt_extended_pm_regs(fadt);

	fadt->iapc_boot_arch = ACPI_FADT_LEGACY_FREE; /* legacy free default */
	fadt->flags |=	ACPI_FADT_WBINVD | /* See table 5-34 ACPI 6.3 spec */
			ACPI_FADT_C1_SUPPORTED |
			ACPI_FADT_S4_RTC_WAKE |
			ACPI_FADT_32BIT_TIMER |
			ACPI_FADT_PCI_EXPRESS_WAKE |
			ACPI_FADT_PLATFORM_CLOCK |
			ACPI_FADT_S4_RTC_VALID |
			ACPI_FADT_REMOTE_POWER_ON;

	fadt->x_firmware_ctl_l = 0;	/* set to 0 if firmware_ctrl is used */
	fadt->x_firmware_ctl_h = 0;
}

/* There are only the following 2 C-states reported by the reference firmware */
const acpi_cstate_t cstate_cfg_table[] = {
	[0] = {
		.ctype = 1,
		.latency = 1,
		.power = 0,
	},
	[1] = {
		.ctype = 2,
		.latency = 0x12,
		.power = 0,
	},
};

const acpi_cstate_t *get_cstate_config_data(size_t *size)
{
	*size = ARRAY_SIZE(cstate_cfg_table);
	return cstate_cfg_table;
}