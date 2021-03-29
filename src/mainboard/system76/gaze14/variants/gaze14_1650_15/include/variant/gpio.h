/* SPDX-License-Identifier: GPL-2.0-only */

#ifndef MAINBOARD_GPIO_H
#define MAINBOARD_GPIO_H

#include <soc/gpe.h>
#include <soc/gpio.h>

#ifndef __ACPI__

/* Early pad configuration in romstage. */
static const struct pad_config early_gpio_table[] = {
	PAD_CFG_NF(GPP_C20, NONE, DEEP, NF1), // UART2_RXD
	PAD_CFG_NF(GPP_C21, NONE, DEEP, NF1), // UART2_TXD
	PAD_NC(GPP_C22, NONE), // NC
	PAD_NC(GPP_C23, NONE), // NC
};

/* Pad configuration in ramstage. */
static const struct pad_config gpio_table[] = {
	/* ------- GPIO Group GPD ------- */
	PAD_CFG_NF(GPD0, NONE, DEEP, NF1), // NC
	PAD_CFG_NF(GPD1, NATIVE, DEEP, NF1), // AC_PRESENT
	PAD_CFG_GPI(GPD2, NATIVE, PWROK), // NC
	PAD_CFG_NF(GPD3, UP_20K, DEEP, NF1), // PWR_BTN#
	PAD_CFG_NF(GPD4, NONE, DEEP, NF1), // SUSB#_PCH
	PAD_CFG_NF(GPD5, NONE, DEEP, NF1), // SUSC#_PCH
	_PAD_CFG_STRUCT(GPD6, 0x44000601, 0x0000), // NC
	_PAD_CFG_STRUCT(GPD7, 0x04000300, 0x0000), // NC
	PAD_CFG_NF(GPD8, NONE, DEEP, NF1), // SUS_CLK_R
	PAD_CFG_GPI(GPD9, NONE, PWROK), // NC
	PAD_CFG_NF(GPD10, NONE, PWROK, NF1), // NC
	PAD_CFG_TERM_GPO(GPD11, 0, NONE, PWROK), // NC

	/* ------- GPIO Group A ------- */
	PAD_CFG_NF(GPP_A0, NONE, DEEP, NF1), // SB_KBCRST#
	PAD_CFG_NF(GPP_A1, NONE, DEEP, NF1), // LPC_AD0
	PAD_CFG_NF(GPP_A2, NONE, DEEP, NF1), // LPC_AD1
	PAD_CFG_NF(GPP_A3, NONE, DEEP, NF1), // LPC_AD2
	PAD_CFG_NF(GPP_A4, NONE, DEEP, NF1), // LPC_AD3
	PAD_CFG_NF(GPP_A5, NONE, DEEP, NF1), // LPC_FRAME#
	PAD_CFG_NF(GPP_A6, NONE, DEEP, NF1), // SERIRQ
	PAD_CFG_NF(GPP_A7, NONE, DEEP, NF1), // NC
	PAD_CFG_NF(GPP_A8, NONE, DEEP, NF1), // PM_CLKRUN#
	PAD_CFG_NF(GPP_A9, NONE, DEEP, NF1), // PCLK_KBC
	PAD_CFG_NF(GPP_A10, NONE, DEEP, NF1), // NC
	PAD_CFG_GPI(GPP_A11, NONE, DEEP), // TODO: LAN_WAKEUP#
	PAD_CFG_GPI(GPP_A12, NONE, DEEP), // NC
	PAD_CFG_NF(GPP_A13, DN_20K, DEEP, NF1), // SUSWARN#
	PAD_CFG_TERM_GPO(GPP_A14, 0, DN_20K, DEEP), // NC
	PAD_CFG_GPI(GPP_A15, NONE, DEEP), // SUS_PWR_ACK
	PAD_NC(GPP_A16, NONE), // NC
	PAD_NC(GPP_A17, NONE), // NC
	PAD_CFG_TERM_GPO(GPP_A18, 1, NONE, DEEP), // SB_BLON
	PAD_NC(GPP_A19, NONE), // NC
	PAD_NC(GPP_A20, NONE), // NC
	PAD_NC(GPP_A21, NONE), // NC
	PAD_CFG_TERM_GPO(GPP_A22, 0, NONE, DEEP), // SATA_PWR_EN
	PAD_NC(GPP_A23, NONE), // NC

	/* ------- GPIO Group B ------- */
	PAD_CFG_GPI(GPP_B0, NONE, DEEP), // TODO: TPM_PIRQ#
	PAD_CFG_TERM_GPO(GPP_B1, 0, NONE, DEEP), // NC
	PAD_CFG_GPI(GPP_B2, NONE, DEEP), // NC
	PAD_CFG_GPI(GPP_B3, NONE, DEEP), // NC
	PAD_CFG_TERM_GPO(GPP_B4, 1, NONE, DEEP), // TODO: EXTTS_SNI_DRV1
	PAD_CFG_GPI(GPP_B5, NONE, PLTRST), // NC
	PAD_CFG_GPI(GPP_B6, NONE, PLTRST), // NC
	PAD_CFG_GPI(GPP_B7, NONE, PLTRST), // NC
	PAD_CFG_GPI(GPP_B8, NONE, PLTRST), // NC
	PAD_CFG_GPI(GPP_B9, NONE, PLTRST), // NC
	PAD_CFG_NF(GPP_B10, NONE, DEEP, NF1), // LAN_CLKREQ#
	PAD_CFG_GPI(GPP_B11, UP_20K, DEEP), // TODO: GPP_B11: DDR Voltage select - 0 = 1.2V, 1 = 1.35V
	PAD_CFG_NF(GPP_B12, NONE, DEEP, NF1), // SLP_S0#
	PAD_CFG_NF(GPP_B13, NONE, DEEP, NF1), // PLT_RST#
	PAD_CFG_NF(GPP_B14, NONE, DEEP, NF1), // PCH_SPKR
	PAD_NC(GPP_B15, NONE), // NC
	PAD_CFG_GPI(GPP_B16, NONE, DEEP), // NC
	PAD_CFG_GPI(GPP_B17, NONE, DEEP), // NC
	PAD_CFG_NF(GPP_B18, NONE, DEEP, NF1), // LPSS_GSPI0_MOSI - strap for no reboot mode
	PAD_NC(GPP_B19, NONE), // NC
	PAD_NC(GPP_B20, NONE), // NC
	PAD_NC(GPP_B21, NONE), // NC
	PAD_CFG_NF(GPP_B22, NONE, DEEP, NF1), // LPSS_GSPI1_MOSI - strap for booting from SPI or LPC
	PAD_CFG_NF(GPP_B23, NONE, DEEP, NF2), // PCH_HOT_GNSS_DISABLE - strap for DCI BSSB mode

	/* ------- GPIO Group C ------- */
	PAD_CFG_NF(GPP_C0, NONE, DEEP, NF1), // SMB_CLK
	PAD_CFG_NF(GPP_C1, NONE, DEEP, NF1), // SMB_DATA
	PAD_CFG_GPI(GPP_C2, NONE, DEEP), // NC
	PAD_NC(GPP_C3, NONE), // NC
	PAD_NC(GPP_C4, NONE), // NC
	PAD_CFG_GPI(GPP_C5, NONE, DEEP), // NC
	PAD_CFG_GPI(GPP_C6, NONE, DEEP), // NC
	PAD_CFG_GPI(GPP_C7, NONE, DEEP), // NC
	PAD_NC(GPP_C8, NONE), // NC
	PAD_CFG_TERM_GPO(GPP_C9, 1, NONE, DEEP), // TODO: CNVI_DET#
	PAD_NC(GPP_C10, NONE), // NC
	PAD_NC(GPP_C11, NONE), // NC
	PAD_NC(GPP_C12, NONE), // NC
	PAD_NC(GPP_C13, NONE), // NC
	PAD_NC(GPP_C14, NONE), // NC
	PAD_NC(GPP_C15, NONE), // NC
	PAD_CFG_NF(GPP_C16, NONE, PLTRST, NF1), // I2C_SCL_TP
	PAD_CFG_NF(GPP_C17, NONE, PLTRST, NF1), // I2C_SDA_TP
	PAD_NC(GPP_C18, NONE), // NC
	PAD_NC(GPP_C19, NONE), // NC
	PAD_CFG_NF(GPP_C20, NONE, DEEP, NF1), // UART2_RXD
	PAD_CFG_NF(GPP_C21, NONE, DEEP, NF1), // UART2_TXD
	PAD_CFG_NF(GPP_C22, NONE, DEEP, NF1), // NC
	PAD_CFG_NF(GPP_C23, NONE, DEEP, NF1), // NC

	/* ------- GPIO Group D ------- */
	PAD_NC(GPP_D0, NONE), // NC
	PAD_NC(GPP_D1, NONE), // NC
	PAD_NC(GPP_D2, NONE), // NC
	PAD_NC(GPP_D3, NONE), // NC
	PAD_NC(GPP_D4, NONE), // NC
	PAD_CFG_NF(GPP_D5, NONE, DEEP, NF3), // CNVI_RF_RST#
	PAD_CFG_NF(GPP_D6, NONE, DEEP, NF3), // XTAL_CLKREQ
	PAD_NC(GPP_D7, NONE), // NC
	PAD_NC(GPP_D8, NONE), // NC
	PAD_NC(GPP_D9, NONE), // NC
	PAD_NC(GPP_D10, NONE), // NC
	PAD_NC(GPP_D11, NONE), // NC
	PAD_NC(GPP_D12, NONE), // NC
	PAD_NC(GPP_D13, NONE), // NC
	PAD_NC(GPP_D14, NONE), // NC
	PAD_NC(GPP_D15, NONE), // NC
	PAD_NC(GPP_D16, NONE), // NC
	PAD_CFG_NF(GPP_D17, NONE, DEEP, NF1), // NC
	PAD_CFG_NF(GPP_D18, NONE, DEEP, NF1), // NC
	PAD_CFG_NF(GPP_D19, NONE, DEEP, NF1), // NC
	PAD_CFG_NF(GPP_D20, NONE, DEEP, NF1), // NC
	PAD_NC(GPP_D21, NONE), // NC
	PAD_NC(GPP_D22, NONE), // NC
	PAD_NC(GPP_D23, NONE), // NC

	/* ------- GPIO Group E ------- */
	PAD_CFG_GPI(GPP_E0, NONE, DEEP), // NC
	PAD_CFG_NF(GPP_E1, NONE, DEEP, NF1), // SATAGP1
	PAD_CFG_GPI(GPP_E2, NONE, DEEP), // NC
	_PAD_CFG_STRUCT(GPP_E3, 0x44000101, 0x0000), // TODO: EXTTS_SNI_DRV0
	PAD_CFG_GPI(GPP_E4, UP_20K, DEEP), // DEVSLP0
	PAD_CFG_GPI(GPP_E5, UP_20K, DEEP), // DEVSLP1
	PAD_NC(GPP_E6, NONE), // NC
	_PAD_CFG_STRUCT(GPP_E7, 0x40800100, 0x3000), // TODO: TP_ATTN#
	PAD_CFG_NF(GPP_E8, NONE, DEEP, NF1), // SATA_LED#
	PAD_NC(GPP_E9, NONE), // NC
	PAD_NC(GPP_E10, NONE), // NC
	PAD_NC(GPP_E11, NONE), // NC
	PAD_NC(GPP_E12, NONE), // NC

	/* ------- GPIO Group F ------- */
	PAD_NC(GPP_F0, NONE), // NC
	PAD_NC(GPP_F1, NONE), // NC
	PAD_NC(GPP_F2, NONE), // NC
	PAD_NC(GPP_F3, NONE), // NC
	PAD_NC(GPP_F4, NONE), // NC
	PAD_CFG_GPI(GPP_F5, NONE, DEEP), // KBLED_DET
	PAD_CFG_GPI(GPP_F6, NONE, DEEP), // LIGHT_KB_DET#
	PAD_NC(GPP_F7, NONE), // NC
	PAD_NC(GPP_F8, NONE), // NC
	PAD_NC(GPP_F9, NONE), // NC
	PAD_NC(GPP_F10, NONE), // BIOS_REC - strap for bios recovery enable
	PAD_NC(GPP_F11, NONE), // PCH_RSVD - unused strap
	PAD_NC(GPP_F12, NONE), // MFG_MODE - strap for manufacturing mode
	PAD_NC(GPP_F13, NONE), // TODO: GP39_GFX_CRB_DETECT - 0 = normal gfx, 1 = customer gfx
	PAD_CFG_GPI(GPP_F14, UP_20K, DEEP), // H_SKTOCC_N
	PAD_NC(GPP_F15, NONE), // NC
	PAD_NC(GPP_F16, NONE), // NC
	PAD_NC(GPP_F17, NONE), // NC
	PAD_NC(GPP_F18, NONE), // NC
	PAD_CFG_NF(GPP_F19, NONE, DEEP, NF1), // NB_ENAVDD
	PAD_CFG_NF(GPP_F20, NONE, DEEP, NF1), // BLON
	PAD_CFG_NF(GPP_F21, NONE, DEEP, NF1), // EDP_BRIGHTNESS
	PAD_CFG_TERM_GPO(GPP_F22, 0, NONE, PLTRST), // TODO: DGPU_RST#_PCH
	PAD_CFG_TERM_GPO(GPP_F23, 0, NONE, DEEP), // TODO: DGPU_PWR_EN

	/* ------- GPIO Group G ------- */
	PAD_CFG_GPI(GPP_G0, NONE, DEEP), // BOARD_ID1
	PAD_CFG_GPI(GPP_G1, NONE, DEEP), // BOARD_ID2
	PAD_CFG_GPI(GPP_G2, NONE, DEEP), // TPM_DET
	PAD_CFG_GPI(GPP_G3, UP_20K, DEEP), // TODO: GPIO4_1V8_MAIN_EN_R
	PAD_NC(GPP_G4, NONE), // NC
	PAD_NC(GPP_G5, NONE), // NC
	PAD_NC(GPP_G6, NONE), // NC
	PAD_NC(GPP_G7, NONE), // NC

	/* ------- GPIO Group H ------- */
	PAD_CFG_NF(GPP_H0, NONE, DEEP, NF1), // WLAN_CLKREQ#
	_PAD_CFG_STRUCT(GPP_H1, 0x84000300, 0x0000), // NC
	PAD_CFG_NF(GPP_H2, NONE, DEEP, NF1), // PEG_CLKREQ#
	_PAD_CFG_STRUCT(GPP_H3, 0x84000300, 0x0000), // NC
	PAD_CFG_NF(GPP_H4, NONE, DEEP, NF1), // SSD_CLKREQ#
	PAD_CFG_NF(GPP_H5, NONE, DEEP, NF1), // SSD2_CLKREQ#
	_PAD_CFG_STRUCT(GPP_H6, 0x84000300, 0x0000), // NC
	_PAD_CFG_STRUCT(GPP_H7, 0x84000300, 0x0000), // NC
	_PAD_CFG_STRUCT(GPP_H8, 0x84000300, 0x0000), // NC
	_PAD_CFG_STRUCT(GPP_H9, 0x84000300, 0x0000), // NC
	PAD_CFG_GPI(GPP_H10, NONE, DEEP), // NC
	PAD_CFG_GPI(GPP_H11, NONE, DEEP), // NC
	PAD_CFG_GPI(GPP_H12, NONE, DEEP), // GPP_H_12 - strap for ESPI flash sharing mode
	PAD_CFG_GPI(GPP_H13, NONE, DEEP), // NC
	PAD_CFG_GPI(GPP_H14, NONE, DEEP), // NC
	PAD_CFG_GPI(GPP_H15, NONE, DEEP), // NC
	PAD_CFG_GPI(GPP_H16, NONE, DEEP), // NC
	PAD_CFG_GPI(GPP_H17, NONE, DEEP), // NC
	PAD_CFG_GPI(GPP_H18, NONE, DEEP), // NC
	PAD_CFG_GPI(GPP_H19, NONE, DEEP), // NC
	PAD_CFG_GPI(GPP_H20, NONE, DEEP), // NC
	PAD_CFG_GPI(GPP_H21, NONE, DEEP), // NC
	PAD_CFG_GPI(GPP_H22, NONE, DEEP), // NC
	PAD_CFG_GPI(GPP_H23, NONE, DEEP), // NC

	/* ------- GPIO Group I ------- */
	PAD_CFG_GPI(GPP_I0, NONE, DEEP), // NC
	PAD_CFG_NF(GPP_I1, NONE, PLTRST, NF1), // HDMI_HPD
	PAD_CFG_NF(GPP_I2, NONE, DEEP, NF1), // NC
	_PAD_CFG_STRUCT(GPP_I3, 0x46880100, 0x0000), // MDP_E_HPD
	PAD_CFG_NF(GPP_I4, NONE, DEEP, NF1), // EDP_HPD
	PAD_CFG_GPI(GPP_I5, NONE, DEEP), // NC
	PAD_CFG_GPI(GPP_I6, NONE, DEEP), // NC
	PAD_CFG_NF(GPP_I7, NONE, DEEP, NF1), // HDMI_CTRLCLK
	PAD_CFG_NF(GPP_I8, NONE, DEEP, NF1), // HDMI_CTRLDATA
	PAD_CFG_GPI(GPP_I9, NONE, DEEP), // NC
	PAD_CFG_GPI(GPP_I10, NONE, DEEP), // NC
	PAD_CFG_GPI(GPP_I11, NONE, DEEP), // TODO: H_SKTOCC_N
	PAD_CFG_GPI(GPP_I12, NONE, DEEP), // NC
	PAD_CFG_GPI(GPP_I13, NONE, DEEP), // NC
	PAD_CFG_GPI(GPP_I14, NONE, DEEP), // NC

	/* ------- GPIO Group J ------- */
	PAD_CFG_NF(GPP_J0, NONE, DEEP, NF1), // CNVI_GNSS_PA_BLANKING
	PAD_CFG_TERM_GPO(GPP_J1, 1, NONE, DEEP), // NC
	PAD_NC(GPP_J2, NONE), // NC
	PAD_NC(GPP_J3, NONE), // NC
	PAD_CFG_NF(GPP_J4, NONE, DEEP, NF1), // CNVI_BRI_DT
	PAD_CFG_NF(GPP_J5, UP_20K, DEEP, NF1), // CNVI_BRI_RSP
	PAD_CFG_NF(GPP_J6, NONE, DEEP, NF1), // CNVI_RGI_DT
	PAD_CFG_NF(GPP_J7, UP_20K, DEEP, NF1), // CNVI_RGI_RSP
	PAD_CFG_NF(GPP_J8, NONE, DEEP, NF1), // CNVI_MFUART2_RXD
	PAD_CFG_NF(GPP_J9, NONE, DEEP, NF1), // CNVI_MFUART2_TXD
	PAD_NC(GPP_J10, NONE), // NC
	PAD_NC(GPP_J11, NONE), // NC

	/* ------- GPIO Group K ------- */
	PAD_NC(GPP_K0, NONE), // NC
	PAD_NC(GPP_K1, NONE), // NC
	PAD_NC(GPP_K2, NONE), // NC
	_PAD_CFG_STRUCT(GPP_K3, 0x80880100, 0x3000), // SCI#
	PAD_NC(GPP_K4, NONE), // NC
	PAD_NC(GPP_K5, NONE), // NC
	_PAD_CFG_STRUCT(GPP_K6, 0x40880100, 0x3000), // SWI#
	PAD_NC(GPP_K7, NONE), // NC
	PAD_CFG_GPI(GPP_K8, NONE, DEEP), // SATA_M2_PWR_EN1
	PAD_CFG_GPI(GPP_K9, NONE, DEEP), // SATA_M2_PWR_EN2
	PAD_CFG_GPI(GPP_K10, NONE, DEEP), // NC
	PAD_CFG_GPI(GPP_K11, NONE, DEEP), // NC
	PAD_NC(GPP_K12, NONE), // NC
	PAD_NC(GPP_K13, NONE), // NC
	PAD_NC(GPP_K14, NONE), // NC
	PAD_NC(GPP_K15, NONE), // NC
	PAD_NC(GPP_K16, NONE), // NC
	PAD_NC(GPP_K17, NONE), // NC
	PAD_NC(GPP_K18, NONE), // NC
	_PAD_CFG_STRUCT(GPP_K19, 0x42000100, 0x3000), // SMI#
	_PAD_CFG_STRUCT(GPP_K20, 0x44000101, 0x0000), // TODO: GPU_EVENT#
	PAD_CFG_GPI(GPP_K21, NONE, DEEP), // TODO: GC6_FB_EN_PCH
	_PAD_CFG_STRUCT(GPP_K22, 0x80000100, 0x0000), // TODO: DGPU_PWRGD_R
	PAD_CFG_NF(GPP_K23, NONE, DEEP, NF1), // NC
};

#endif

#endif
