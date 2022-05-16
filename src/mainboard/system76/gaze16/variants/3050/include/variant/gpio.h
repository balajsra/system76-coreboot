/* SPDX-License-Identifier: GPL-2.0-only */

#ifndef VARIANT_GPIO_H
#define VARIANT_GPIO_H

#include <soc/gpio.h>

#define DGPU_RST_N	GPP_F8
#define DGPU_PWR_EN	GPP_F9
#define DGPU_GC6	GPP_K11
#define DGPU_SSID	0x50151558

#ifndef __ACPI__

static const struct pad_config early_gpio_table[] = {
	PAD_CFG_NF(GPP_C20, NONE, DEEP, NF1), // UART2_RXD
	PAD_CFG_NF(GPP_C21, NONE, DEEP, NF1), // UART2_TXD
	PAD_CFG_NF(GPP_F19, NONE, DEEP, NF1), // NB_ENAVDD
	PAD_CFG_GPO(GPP_F8, 0, DEEP), // DGPU_RST#_PCH
	PAD_CFG_GPO(GPP_F9, 0, DEEP), // DGPU_PWR_EN
};

static const struct pad_config gpio_table[] = {
	/* ------- GPIO Group GPD ------- */
	PAD_CFG_NF(GPD0, UP_20K, PWROK, NF1), // BATLOW#
	PAD_CFG_NF(GPD1, NATIVE, PWROK, NF1), // AC_PRESENT
	PAD_CFG_GPI(GPD2, NATIVE, PWROK), // LAN_WAKE#
	PAD_CFG_NF(GPD3, UP_20K, PWROK, NF1), // PWR_BTN#
	PAD_CFG_NF(GPD4, NONE, PWROK, NF1), // SUSB#_PCH
	PAD_CFG_NF(GPD5, NONE, PWROK, NF1), // SUSC#_PCH
	PAD_CFG_NF(GPD6, NONE, PWROK, NF1), // SLP_A#
	PAD_CFG_GPI(GPD7, NONE, PWROK), // GPD7
	PAD_CFG_NF(GPD8, NONE, PWROK, NF1), // SUS_CLK
	PAD_NC(GPD9, NONE), // PCH_SLP_WLAN# (100k pull-down)
	PAD_NC(GPD10, NONE), // SLP_S5# (100k pull-down)
	PAD_NC(GPD11, NONE),
	PAD_NC(GPD12, NONE),

	/* ------- GPIO Group GPP_A ------- */
	PAD_CFG_NF(GPP_A0, UP_20K, DEEP, NF1), // ESPI_AD0
	PAD_CFG_NF(GPP_A1, UP_20K, DEEP, NF1), // ESPI_AD1
	PAD_CFG_NF(GPP_A2, UP_20K, DEEP, NF1), // ESPI_AD2
	PAD_CFG_NF(GPP_A3, UP_20K, DEEP, NF1), // ESPI_AD3
	PAD_CFG_NF(GPP_A4, UP_20K, DEEP, NF1), // ESPI_FRAME#
	PAD_CFG_NF(GPP_A5, DN_20K, DEEP, NF1), // ESPI_KBC
	PAD_CFG_NF(GPP_A6, NONE, DEEP, NF1), // ESPI_RESET_N
	PAD_NC(GPP_A7, NONE),
	PAD_NC(GPP_A8, NONE),
	PAD_NC(GPP_A9, NONE),
	PAD_CFG_GPI(GPP_A10, UP_20K, DEEP), // SERIRQ
	PAD_NC(GPP_A11, NONE),
	PAD_NC(GPP_A12, NONE),
	PAD_NC(GPP_A13, NONE),
	PAD_NC(GPP_A14, NONE),

	/* ------- GPIO Group GPP_B ------- */
	_PAD_CFG_STRUCT(GPP_B0, 0x40100100, 0x3000), // TPM_PIRQ#
	PAD_NC(GPP_B1, NONE),
	PAD_NC(GPP_B2, NONE),
	PAD_CFG_GPO(GPP_B3, 1, DEEP), // EC_BT_EN
	PAD_NC(GPP_B4, NONE),
	PAD_CFG_NF(GPP_B5, NONE, DEEP, NF1), // GFX_CLKREQ0#
	PAD_NC(GPP_B6, NONE),
	PAD_NC(GPP_B7, NONE),
	PAD_NC(GPP_B8, NONE),
	PAD_CFG_NF(GPP_B9, NONE, DEEP, NF1), // SSD2_CLKREQ4#
	PAD_CFG_NF(GPP_B10, NONE, DEEP, NF1), // LAN_CLKREQ5#
	PAD_NC(GPP_B11, NONE),
	PAD_CFG_NF(GPP_B12, NONE, DEEP, NF1), // SLP_S0#
	PAD_CFG_NF(GPP_B13, NONE, DEEP, NF1), // PLT_RST#
	PAD_CFG_NF(GPP_B14, NONE, DEEP, NF1), // PCH_SPKR
	PAD_CFG_GPO(GPP_B15, 1, DEEP), // SSD_PWR_EN#
	PAD_NC(GPP_B16, NONE),
	PAD_NC(GPP_B17, NONE),
	PAD_CFG_GPI(GPP_B18, NONE, DEEP), // GSPI0_MOSI
	PAD_NC(GPP_B19, NONE),
	PAD_NC(GPP_B20, NONE),
	PAD_NC(GPP_B21, NONE),
	PAD_NC(GPP_B22, NONE),
	PAD_CFG_GPI(GPP_B23, NONE, DEEP), // SML1_ALERT#

	/* ------- GPIO Group GPP_C ------- */
	PAD_CFG_NF(GPP_C0, NONE, DEEP, NF1), // SMB_CLK
	PAD_CFG_NF(GPP_C1, NONE, DEEP, NF1), // SMB_DAT
	PAD_CFG_GPI(GPP_C2, NONE, DEEP), // CNVI_WAKE#
	PAD_NC(GPP_C3, NONE),
	PAD_NC(GPP_C4, NONE),
	PAD_CFG_GPI(GPP_C5, NONE, DEEP), // SML0_ALERT#
	PAD_NC(GPP_C6, NONE),
	PAD_NC(GPP_C7, NONE),
	PAD_CFG_GPI(GPP_C8, NONE, DEEP), // TPM_DET
	PAD_CFG_GPI(GPP_C9, NONE, DEEP), // BOARD_ID1
	PAD_CFG_GPI(GPP_C10, NONE, DEEP), // BOARD_ID2
	PAD_CFG_GPI(GPP_C11, NONE, DEEP), // BOARD_ID3
	PAD_NC(GPP_C12, NONE),
	PAD_NC(GPP_C13, NONE),
	PAD_CFG_GPI(GPP_C14, NONE, DEEP), // GPC14_RTD3
	PAD_NC(GPP_C15, NONE),
	PAD_CFG_NF(GPP_C16, NONE, PWROK, NF1), // I2C_SDA_TP
	PAD_CFG_NF(GPP_C17, NONE, PWROK, NF1), // I2C_SCL_TP
	PAD_CFG_GPI(GPP_C18, NONE, DEEP), // SCI#
	PAD_CFG_GPI(GPP_C19, NONE, DEEP), // SWI#
	//PAD_CFG_NF(GPP_C20, NONE, DEEP, NF1), // UART2_RXD
	//PAD_CFG_NF(GPP_C21, NONE, DEEP, NF1), // UART2_TXD
	PAD_NC(GPP_C22, NONE),
	PAD_CFG_GPI(GPP_C23, NONE, DEEP), // SMI#

	/* ------- GPIO Group GPP_D ------- */
	PAD_NC(GPP_D0, NONE),
	PAD_NC(GPP_D1, NONE),
	PAD_NC(GPP_D2, NONE),
	PAD_NC(GPP_D3, NONE),
	PAD_CFG_NF(GPP_D4, NONE, DEEP, NF1), // SML1_CLK
	PAD_CFG_NF(GPP_D5, NONE, DEEP, NF2), // CNVI_RF_RST#
	PAD_CFG_NF(GPP_D6, NONE, DEEP, NF3), // XTAL_CLKREQ
	PAD_NC(GPP_D7, NONE),
	PAD_NC(GPP_D8, NONE),
	PAD_CFG_NF(GPP_D9, NONE, DEEP, NF1), // SML0_CLK
	PAD_CFG_NF(GPP_D10, NONE, DEEP, NF1), // SML0_DATA
	PAD_NC(GPP_D11, NONE),
	PAD_NC(GPP_D12, NONE),
	PAD_NC(GPP_D13, NONE),
	PAD_NC(GPP_D14, NONE),
	PAD_CFG_NF(GPP_D15, NONE, DEEP, NF1), // SML1_DATA
	PAD_NC(GPP_D16, NONE),
	PAD_NC(GPP_D17, NONE),
	PAD_NC(GPP_D18, NONE),
	PAD_NC(GPP_D19, NONE),
	PAD_NC(GPP_D20, NONE),
	PAD_NC(GPP_D21, NONE),
	PAD_NC(GPP_D22, NONE),
	PAD_NC(GPP_D23, NONE),

	/* ------- GPIO Group GPP_E ------- */
	PAD_NC(GPP_E0, NONE),
	PAD_CFG_NF(GPP_E1, UP_20K, DEEP, NF1), // SATAGP1
	PAD_NC(GPP_E2, NONE),
	PAD_CFG_GPI(GPP_E3, NONE, DEEP), // SMI#
	PAD_CFG_GPI(GPP_E4, NONE, DEEP), // DEVSLP0
	PAD_CFG_NF(GPP_E5, NONE, PWROK, NF1), // DEVSLP1
	PAD_NC(GPP_E6, NONE),
	PAD_NC(GPP_E7, NONE),
	PAD_CFG_NF(GPP_E8, NONE, DEEP, NF1), // SATA_LED#
	PAD_CFG_GPI(GPP_E9, NONE, DEEP), // USB_OC0#
	PAD_CFG_GPI(GPP_E10, NONE, DEEP), // USB_OC1#
	PAD_CFG_GPI(GPP_E11, NONE, DEEP), // USB_OC2#
	PAD_CFG_GPI(GPP_E12, NONE, DEEP), // USB_OC3#

	/* ------- GPIO Group GPP_F ------- */
	PAD_NC(GPP_F0, NONE),
	PAD_NC(GPP_F1, NONE),
	PAD_CFG_GPO(GPP_F2, 1, PLTRST), // LAN_RTD3#
	PAD_CFG_GPO(GPP_F3, 1, DEEP), // GPP_LAN_RST#
	PAD_CFG_GPO(GPP_F4, 1, DEEP), // SATA_PWR_EN
	PAD_CFG_GPO(GPP_F5, 1, DEEP), // 1P05_CTRL
	PAD_NC(GPP_F6, NONE),
	PAD_NC(GPP_F7, NONE),
	//PAD_CFG_GPO(GPP_F8, 1, DEEP), // DGPU_RST#_PCH
	//PAD_CFG_GPO(GPP_F9, 1, DEEP), // DGPU_PWR_EN
	PAD_CFG_GPI(GPP_F10, NONE, DEEP), // BIOS_REC
	PAD_CFG_GPI(GPP_F11, NONE, DEEP), // PCH_RSVD
	PAD_CFG_GPO(GPP_F12, 1, DEEP), // PCH_WLAN_EN
	PAD_NC(GPP_F13, NONE),
	PAD_NC(GPP_F14, NONE),
	PAD_CFG_GPI(GPP_F15, NONE, DEEP), // SKTOCC#
	PAD_NC(GPP_F16, NONE),
	PAD_CFG_GPO(GPP_F17, 1, DEEP), // SB_BLON
	PAD_NC(GPP_F18, NONE),
	//PAD_CFG_NF(GPP_F19, NONE, DEEP, NF1), // NB_ENAVDD
	PAD_CFG_NF(GPP_F20, NONE, DEEP, NF1), // BLON
	PAD_CFG_NF(GPP_F21, NONE, DEEP, NF1), // EDP_BRIGHTNESS
	PAD_NC(GPP_F22, NONE), // VNN_CTRL
	PAD_NC(GPP_F23, NONE),

	/* ------- GPIO Group GPP_G ------- */
	PAD_NC(GPP_G0, NONE),
	PAD_CFG_GPI(GPP_G1, NONE, DEEP), // CNVI_DET#
	PAD_NC(GPP_G2, NONE),
	PAD_NC(GPP_G3, NONE),
	PAD_NC(GPP_G4, NONE),
	PAD_NC(GPP_G5, NONE),
	PAD_NC(GPP_G6, NONE),
	PAD_NC(GPP_G7, NONE),
	PAD_NC(GPP_G8, NONE),
	PAD_CFG_GPI(GPP_G9, NONE, DEEP), // GPP_G9
	PAD_NC(GPP_G10, NONE),
	PAD_CFG_GPI(GPP_G11, NONE, DEEP), // GPP_G11
	PAD_NC(GPP_G12, NONE),
	_PAD_CFG_STRUCT(GPP_G13, 0x44001300, 0x3c00), // GPP_G13
	PAD_NC(GPP_G14, NONE),
	PAD_NC(GPP_G15, NONE),

	/* ------- GPIO Group GPP_H ------- */
	PAD_NC(GPP_H0, NONE),
	PAD_CFG_NF(GPP_H1, NONE, DEEP, NF1), // CARD_CLKREQ7#
	PAD_CFG_NF(GPP_H2, NONE, DEEP, NF1), // WLAN_CLKREQ8#
	PAD_CFG_NF(GPP_H3, NONE, DEEP, NF1), // SSD1_CLKREQ9#
	PAD_NC(GPP_H4, NONE),
	PAD_NC(GPP_H5, NONE),
	PAD_CFG_GPI(GPP_H6, NONE, DEEP), // SB_KBCRST#
	PAD_NC(GPP_H7, NONE),
	PAD_NC(GPP_H8, NONE),
	PAD_NC(GPP_H9, NONE),
	PAD_CFG_GPI(GPP_H10, NONE, DEEP), // SML_2CLK
	PAD_CFG_GPI(GPP_H11, NONE, DEEP), // SML_2DATA
	PAD_CFG_GPI(GPP_H12, NONE, DEEP), // SML_2ALERT#
	PAD_CFG_GPI(GPP_H13, NONE, DEEP), // SML_3CLK
	PAD_CFG_GPI(GPP_H14, NONE, DEEP), // SML_3DATA
	PAD_CFG_GPI(GPP_H15, NONE, PLTRST), // SML_3ALERT#
	PAD_CFG_GPI(GPP_H16, NONE, DEEP), // SML_4CLK
	PAD_CFG_GPO(GPP_H17, 1, DEEP), // SSD2_PWR_EN#
	PAD_CFG_GPI(GPP_H18, NONE, DEEP), // SML_4ALERT#
	PAD_CFG_GPI(GPP_H19, NONE, DEEP), // PCH_FLASH_I2C_SDA
	PAD_CFG_GPI(GPP_H20, NONE, DEEP), // PCH_FLASH_I2C_SCL
	PAD_NC(GPP_H21, NONE),
	PAD_NC(GPP_H22, NONE),
	PAD_CFG_GPO(GPP_H23, 1, DEEP), // M2_SSD_RST#

	/* ------- GPIO Group GPP_I ------- */
	PAD_CFG_NF(GPP_I0, NONE, PWROK, NF1), // PMC_ALERT#
	PAD_CFG_GPI(GPP_I1, NONE, DEEP), // GPU_EVENT#
	PAD_NC(GPP_I2, NONE),
	PAD_NC(GPP_I3, NONE),
	PAD_NC(GPP_I4, NONE),
	PAD_CFG_NF(GPP_I5, NONE, DEEP, NF1), // HDMI_CTRLCLK
	PAD_CFG_NF(GPP_I6, NONE, DEEP, NF1), // HDMI_CTRLDATA
	PAD_NC(GPP_I7, NONE),
	PAD_NC(GPP_I8, NONE),
	PAD_CFG_GPO(GPP_I9, 1, DEEP), // M2_SSD2_RST#
	PAD_NC(GPP_I10, NONE),
	PAD_CFG_GPI(GPP_I11, NONE, PLTRST), // USB_OC4#
	PAD_CFG_GPI(GPP_I12, NONE, PLTRST), // USB_OC5#
	PAD_CFG_GPI(GPP_I13, NONE, PLTRST), // USB_OC6#
	PAD_CFG_GPI(GPP_I14, NONE, PLTRST), // USB_OC7#

	/* ------- GPIO Group GPP_J ------- */
	PAD_CFG_NF(GPP_J0, NONE, DEEP, NF1), // CNVI_GNSS_PA_BLANKING
	PAD_CFG_NF(GPP_J1, NONE, DEEP, NF1), // CPU_C10_GATE#
	PAD_CFG_NF(GPP_J2, NONE, DEEP, NF1), // CNVI_BRI_DT
	PAD_CFG_NF(GPP_J3, UP_20K, DEEP, NF1), // CNVI_BRI_RSP
	PAD_CFG_NF(GPP_J4, NONE, DEEP, NF1), // CNVI_RGI_DT
	PAD_CFG_NF(GPP_J5, UP_20K, DEEP, NF1), // CNVI_RGI_RSP
	PAD_CFG_NF(GPP_J6, NONE, DEEP, NF1), // CNVI_MFUART2_RXD
	PAD_CFG_NF(GPP_J7, NONE, DEEP, NF1), // CNVI_MFUART2_TXD
	PAD_CFG_GPI(GPP_J8, NONE, PLTRST), // GPIO4_GC6_NVDD_EN_R
	PAD_NC(GPP_J9, NONE),

	/* ------- GPIO Group GPP_K ------- */
	PAD_CFG_GPO(GPP_K0, 0, DEEP), // DGPU_OVRM
	PAD_NC(GPP_K1, NONE),
	PAD_CFG_GPI(GPP_K2, NONE, DEEP), // DGPU_PWRGD_R
	PAD_NC(GPP_K3, NONE),
	PAD_NC(GPP_K4, NONE),
	PAD_NC(GPP_K5, NONE),
	PAD_CFG_NF(GPP_K6, NONE, DEEP, NF1), // EDP_HPD
	PAD_CFG_NF(GPP_K7, NONE, DEEP, NF1), // HDMI_HPD
	PAD_CFG_NF(GPP_K8, NONE, DEEP, NF1), // VCCIN_AUX_VID0
	PAD_CFG_NF(GPP_K9, NONE, DEEP, NF1), // VCCIN_AUX_VID1
	_PAD_CFG_STRUCT(GPP_K10, 0x46880100, 0x0000), // DGPU_MDP_HPD
	PAD_CFG_GPI(GPP_K11, DN_20K, DEEP), // GC6_FB_EN_PCH

	/* ------- GPIO Group GPP_R ------- */
	PAD_CFG_NF(GPP_R0, NONE, DEEP, NF1), // HDA_BITCLK
	PAD_CFG_NF(GPP_R1, NATIVE, DEEP, NF1), // HDA_SYNC
	PAD_CFG_NF(GPP_R2, NATIVE, DEEP, NF1), // HDA_SDOUT / ME_WE
	PAD_CFG_NF(GPP_R3, NATIVE, DEEP, NF1), // HDA_SDIN0
	PAD_CFG_NF(GPP_R4, NONE, DEEP, NF1), // AZ_RST#_R
	PAD_NC(GPP_R5, NONE),
	PAD_NC(GPP_R6, NONE),
	PAD_NC(GPP_R7, NONE), // 100k pull-down
	PAD_NC(GPP_R8, NONE),
	PAD_NC(GPP_R9, NONE),
	PAD_NC(GPP_R10, NONE),
	PAD_NC(GPP_R11, NONE),
	PAD_CFG_GPI_INT(GPP_R12, NONE, PLTRST, LEVEL), // TP_ATTN#
	PAD_NC(GPP_R13, NONE),
	PAD_NC(GPP_R14, NONE),
	PAD_NC(GPP_R15, NONE),
	PAD_NC(GPP_R16, NONE),
	PAD_NC(GPP_R17, NONE),
	PAD_NC(GPP_R18, NONE),
	PAD_NC(GPP_R19, NONE),

	/* ------- GPIO Group GPP_S ------- */
	PAD_NC(GPP_S0, NONE),
	PAD_NC(GPP_S1, NONE),
	PAD_NC(GPP_S2, NONE),
	PAD_NC(GPP_S3, NONE),
	PAD_NC(GPP_S4, NONE),
	PAD_NC(GPP_S5, NONE),
	PAD_CFG_GPI(GPP_S6, NONE, DEEP), // DMIC_CLK_PCH
	PAD_CFG_GPI(GPP_S7, NONE, DEEP), // DMIC_DAT_PCH
};

#endif /* __ACPI__ */

#endif /* VARIANT_GPIO_H */
