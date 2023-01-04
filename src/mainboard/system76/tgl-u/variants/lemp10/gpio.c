/* SPDX-License-Identifier: GPL-2.0-only */

#include <mainboard/gpio.h>
#include <soc/gpio.h>

static const struct pad_config gpio_table[] = {
	PAD_CFG_NF(GPD0, UP_20K, PWROK, NF1), // PM_BATLOW#
	PAD_CFG_NF(GPD1, NATIVE, PWROK, NF1), // AC_PRESENT
	PAD_CFG_GPI(GPD2, NONE, PWROK),
	PAD_CFG_NF(GPD3, UP_20K, PWROK, NF1), // PWR_BTN#
	PAD_CFG_NF(GPD4, NONE, PWROK, NF1), // SUSB#_PCH
	PAD_CFG_NF(GPD5, NONE, PWROK, NF1), // SUSC#_PCH
	PAD_CFG_NF(GPD6, NONE, DEEP, NF1), // SLP_A# - test point
	PAD_CFG_GPO(GPD7, 1, PWROK), // GPD7_REST
	PAD_CFG_NF(GPD8, NONE, PWROK, NF1), // SUS_CLK
	PAD_CFG_GPO(GPD9, 0, PWROK), // GPD9_RTD3
	PAD_CFG_NF(GPD10, UP_20K, DEEP, NF1), // SLP_S5# - test point
	PAD_CFG_GPI(GPD11, UP_20K, DEEP),

	PAD_CFG_NF(GPP_A0, UP_20K, DEEP, NF1), // ESPI_IO_0
	PAD_CFG_NF(GPP_A1, UP_20K, DEEP, NF1), // ESPI_IO_1
	PAD_CFG_NF(GPP_A2, UP_20K, DEEP, NF1), // ESPI_IO_2
	PAD_CFG_NF(GPP_A3, UP_20K, DEEP, NF1), // ESPI_IO_3
	PAD_CFG_NF(GPP_A4, UP_20K, DEEP, NF1), // ESPI_CS_N
	PAD_CFG_NF(GPP_A5, DN_20K, DEEP, NF1), // ESPI_CLK
	PAD_CFG_NF(GPP_A6, NONE, DEEP, NF1), // ESPI_RESET_N
	PAD_NC(GPP_A7, NONE),
	PAD_CFG_NF(GPP_A8, NONE, DEEP, NF2), // CNVI_RST#
	PAD_CFG_NF(GPP_A9, NONE, DEEP, NF3), // CNVI_CLKREQ
	PAD_NC(GPP_A10, NONE), // GPPC_DMIC_DATA
	PAD_NC(GPP_A11, NONE),
	PAD_CFG_NF(GPP_A12, NONE, DEEP, NF1), // SATAGP1
	PAD_CFG_GPO(GPP_A13, 1, PLTRST), // PCH_BT_EN
	PAD_NC(GPP_A14, NONE), // GPPC_DMIC_CLK
	PAD_NC(GPP_A15, NONE), // USB_OC2#
	PAD_NC(GPP_A16, NONE), // USB_OC3#
	PAD_NC(GPP_A17, NONE),
	PAD_CFG_NF(GPP_A18, NONE, DEEP, NF1), // HDMI_HPD
	PAD_NC(GPP_A19, NONE),
	PAD_NC(GPP_A20, NONE),
	PAD_NC(GPP_A21, NONE),
	PAD_NC(GPP_A22, NONE),
	PAD_CFG_GPO(GPP_A23, 0, PLTRST), // TC_RETIMER_FORCE_PWR

	PAD_CFG_NF(GPP_B0, NONE, DEEP, NF1), // VCCIN_AUX_VID0
	PAD_CFG_NF(GPP_B1, NONE, DEEP, NF1), // VCCIN_AUX_VID1
	PAD_CFG_GPI(GPP_B2, UP_20K, DEEP), // VRALERT#
	PAD_CFG_GPI_INT(GPP_B3, NONE, PLTRST, LEVEL), // GPP_B3 - touchpad interrupt
	PAD_NC(GPP_B4, NONE),
	PAD_NC(GPP_B5, NONE), // PCH_FLASH_I2C_SDA - test point
	PAD_NC(GPP_B6, NONE), // PCH_FLASH_I2C_SCL - test point
	PAD_NC(GPP_B7, NONE),
	PAD_NC(GPP_B8, NONE),
	PAD_NC(GPP_B9, NONE),
	PAD_NC(GPP_B10, NONE),
	PAD_CFG_NF(GPP_B11, NONE, PWROK, NF1), // TBTA_I2C_INT
	PAD_CFG_NF(GPP_B12, NONE, DEEP, NF1), // SLP_S0#
	PAD_CFG_NF(GPP_B13, NONE, DEEP, NF1), // PLT_RST#
	PAD_CFG_GPO(GPP_B14, 0, DEEP), // PCH_SPKR
	PAD_NC(GPP_B15, NONE),
	PAD_NC(GPP_B16, NONE), // PCH_GPP_B16 - test point
	PAD_NC(GPP_B17, NONE),
	PAD_NC(GPP_B18, NONE), // PCH_GPP_B18 - No reboot strap
	PAD_NC(GPP_B19, NONE),
	PAD_NC(GPP_B20, NONE),
	PAD_NC(GPP_B21, NONE),
	PAD_NC(GPP_B22, NONE),
	PAD_CFG_GPO(GPP_B23, 0, DEEP), // GPP_B23

	PAD_CFG_NF(GPP_C0, NONE, DEEP, NF1), // SMB_CLK
	PAD_CFG_NF(GPP_C1, NONE, DEEP, NF1), // SMB_DATA
	PAD_CFG_GPO(GPP_C2, 1, DEEP), // PCH_GPP_C2 - ME TLS strap
	PAD_CFG_NF(GPP_C3, NONE, DEEP, NF1), // SML0_CLK
	PAD_CFG_NF(GPP_C4, NONE, DEEP, NF1), // SML0_DATA
	PAD_NC(GPP_C5, NONE), // PCH_GPP_C5 - boot strap bit 0
	PAD_CFG_NF(GPP_C6, NONE, PWROK, NF1), // TBT_I2C_SCL
	PAD_CFG_NF(GPP_C7, NONE, PWROK, NF1), // TBT_I2C_SDA
	PAD_NC(GPP_C8, NONE),
	_PAD_CFG_STRUCT(GPP_C9, 0x40100100, 0x3000), // TPM_PIRQ#
	PAD_NC(GPP_C10, NONE),
	PAD_NC(GPP_C11, NONE),
	PAD_NC(GPP_C12, NONE),
	PAD_CFG_GPO(GPP_C13, 1, PLTRST), // SSD1_PWR_DN#
	PAD_NC(GPP_C14, DN_20K),
	PAD_NC(GPP_C15, NONE),
	PAD_CFG_NF(GPP_C16, NONE, DEEP, NF1), // T_SDA
	PAD_CFG_NF(GPP_C17, NONE, DEEP, NF1), // T_SCL
	PAD_CFG_NF(GPP_C18, NONE, DEEP, NF1), // PCH_I2C_SDA
	PAD_CFG_NF(GPP_C19, NONE, DEEP, NF1), // PCH_I2C_SCL
	PAD_CFG_NF(GPP_C20, UP_20K, DEEP, NF1), // UART2_RXD
	PAD_CFG_NF(GPP_C21, UP_20K, DEEP, NF1), // UART2_TXD
	PAD_CFG_GPO(GPP_C22, 1, PLTRST), // GPP_C12_RTD3
	_PAD_CFG_STRUCT(GPP_C23, 0x40880100, 0x0000), // PCH_GPP_C23

	PAD_CFG_GPO(GPP_D0, 1, DEEP), // SB_BLON
	PAD_CFG_GPI(GPP_D1, NONE, DEEP), // DDR_TYPE_D1
	PAD_CFG_GPI(GPP_D2, DN_20K, DEEP), // LEDKB_DET#
	PAD_CFG_GPI(GPP_D3, DN_20K, DEEP), // BOARD_ID
	PAD_NC(GPP_D4, NONE),
	PAD_CFG_NF(GPP_D5, NONE, DEEP, NF1), // SSD1_CLKREQ#
	PAD_CFG_NF(GPP_D6, NONE, DEEP, NF1), // WLAN_CLKREQ#
	PAD_CFG_NF(GPP_D7, NONE, DEEP, NF1), // CARD_CLKREQ#
	PAD_CFG_NF(GPP_D8, NONE, DEEP, NF1), // SSD2_CLKREQ#
	PAD_CFG_GPO(GPP_D9, 1, PLTRST), // GPP_D13_RTD3 - schematics name incorrect
	PAD_NC(GPP_D10, NONE), // GPP_D10 - I2C / TBT_LSX2 pin voltage (L=1.8V, H=3.3V)
	PAD_CFG_GPI(GPP_D11, DN_20K, DEEP),
	PAD_NC(GPP_D12, NONE), // GPP_D12 - I2C / TBT_LSX3 pin voltage (L=1.8V, H=3.3V)
	PAD_NC(GPP_D13, NONE),
	PAD_CFG_GPO(GPP_D14, 1, PLTRST), // SSD2_PWR_DN#
	PAD_NC(GPP_D15, NONE),
	PAD_NC(GPP_D16, NONE),
	PAD_CFG_GPI(GPP_D17, NONE, DEEP), // DDR_TYPE_D17
	PAD_CFG_GPI(GPP_D18, NONE, DEEP), // DDR_TYPE_D18
	PAD_NC(GPP_D19, NONE),

	PAD_NC(GPP_E0, NONE),
	PAD_CFG_GPO(GPP_E1, 0, PLTRST), // ROM_I2C_EN
	PAD_NC(GPP_E2, NONE),
	PAD_CFG_GPI(GPP_E3, DN_20K, DEEP), // SB_KBCRST#
	PAD_NC(GPP_E4, NONE), // DEVSLP0
	PAD_CFG_NF(GPP_E5, NONE, DEEP, NF1), // DEVSLP1
	PAD_NC(GPP_E6, NONE), // PCH_GPP_E6 - reserved strap
	PAD_NC(GPP_E7, NONE),
	PAD_NC(GPP_E8, NONE),
	PAD_NC(GPP_E9, NONE), // USB_OC0#
	PAD_NC(GPP_E10, NONE), // PCH_GPP_E10 - THC0_SPI1 chip select
	PAD_NC(GPP_E11, NONE), // PCH_GPP_E11 - THC0_SPI1 clock
	PAD_NC(GPP_E12, NONE),
	PAD_NC(GPP_E13, NONE),
	PAD_CFG_NF(GPP_E14, NONE, DEEP, NF1), // EDP_HPD
	PAD_CFG_GPI(GPP_E15, DN_20K, DEEP), // SCI#
	_PAD_CFG_STRUCT(GPP_E16, 0x82840100, 0x0000), // SMI#
	PAD_NC(GPP_E17, NONE),
	// GPP_E18 (TBT_LSX0_TXD) configured by FSP (Ref: Intel doc 617016)
	// GPP_E19 (TBT_LSX0_RXD) configured by FSP (Ref: Intel doc 617016)
	_PAD_CFG_STRUCT(GPP_E20, 0x40880100, 0x0000), // SWI#
	PAD_NC(GPP_E21, NONE), // GPP_E21 - DDP2 I2C / TBT_LSX1 pin voltage (L=1.8V, H=3.3V)
	PAD_NC(GPP_E22, NONE),
	PAD_NC(GPP_E23, NONE),

	PAD_CFG_NF(GPP_F0, NONE, DEEP, NF1), // CNVI_BRI_DT
	PAD_CFG_NF(GPP_F1, UP_20K, DEEP, NF1), // CNVI_BRI_RSP
	PAD_CFG_NF(GPP_F2, NONE, DEEP, NF1), // CNVI_RGI_DT
	PAD_CFG_NF(GPP_F3, UP_20K, DEEP, NF1), // CNVI_RGI_RSP
	PAD_NC(GPP_F4, NONE),
	PAD_NC(GPP_F5, NONE),
	PAD_NC(GPP_F6, NONE), // CNVI_GNSS_PA_BLANKING
	PAD_NC(GPP_F7, NONE), // GPP_F7 - reserved strap
	PAD_NC(GPP_F8, NONE),
	PAD_NC(GPP_F9, NONE),
	PAD_NC(GPP_F10, NONE), // GPP_F10 - reserved strap
	PAD_NC(GPP_F11, NONE),
	PAD_NC(GPP_F12, NONE),
	PAD_NC(GPP_F13, NONE),
	PAD_NC(GPP_F14, NONE),
	PAD_NC(GPP_F15, NONE),
	PAD_NC(GPP_F16, NONE),
	PAD_CFG_GPI(GPP_F17, NONE, PLTRST), // TPM_DET#
	PAD_NC(GPP_F18, NONE),
	PAD_NC(GPP_F19, NONE),
	PAD_NC(GPP_F20, NONE), // EXT_PWR_GATE#
	PAD_CFG_GPI(GPP_F21, DN_20K, DEEP), // EXT_PWR_GATE2#
	PAD_NC(GPP_F22, NONE), // VNN_CTRL
	PAD_NC(GPP_F23, NONE), // V1P05_CTRL

	PAD_NC(GPP_H0, DN_20K), // GPP_H0 - boot strap bit 1
	PAD_NC(GPP_H1, DN_20K), // GPP_H1 - boot strap bit 2
	PAD_NC(GPP_H2, DN_20K), // GPP_H2 - boot strap bit 3
	PAD_CFG_GPI(GPP_H3, DN_20K, DEEP),
	PAD_NC(GPP_H4, NONE),
	PAD_NC(GPP_H5, NONE),
	PAD_CFG_GPI(GPP_H6, NONE, DEEP), // test point
	PAD_NC(GPP_H7, NONE), // test point
	PAD_CFG_GPI(GPP_H8, DN_20K, DEEP), // CNVI_MFUART2_RXD
	PAD_CFG_GPI(GPP_H9, DN_20K, DEEP), // CNVI_MFUART2_TXD
	PAD_NC(GPP_H10, NONE),
	PAD_NC(GPP_H11, NONE),
	PAD_NC(GPP_H12, NONE),
	PAD_NC(GPP_H13, NONE),
	PAD_NC(GPP_H14, NONE), // G_INT1
	PAD_NC(GPP_H15, NONE),
	PAD_CFG_NF(GPP_H16, NONE, DEEP, NF1), // HDMI_CTRLCLK
	PAD_CFG_NF(GPP_H17, NONE, DEEP, NF1), // HDMI_CTRLDATA
	PAD_CFG_NF(GPP_H18, NONE, DEEP, NF1), // CPU_C10_GATE#
	PAD_NC(GPP_H19, NONE), // CNVI_WAKE#
	PAD_NC(GPP_H20, NONE), // PM_CLKRUN#
	PAD_NC(GPP_H21, NONE),
	PAD_NC(GPP_H22, NONE),
	PAD_NC(GPP_H23, NONE),

	PAD_CFG_NF(GPP_R0, NONE, DEEP, NF1), // HDA_BITCLK
	PAD_CFG_NF(GPP_R1, NATIVE, DEEP, NF1), // HDA_SYNC
	PAD_CFG_NF(GPP_R2, NATIVE, DEEP, NF1), // HDA_SDOUT
	PAD_CFG_NF(GPP_R3, NATIVE, DEEP, NF1), // HDA_SDIN0
	PAD_CFG_NF(GPP_R4, NONE, DEEP, NF1), // AZ_RST#_R
	PAD_NC(GPP_R5, NONE),
	PAD_NC(GPP_R6, NONE),
	PAD_NC(GPP_R7, NONE),

	PAD_NC(GPP_S0, NONE),
	PAD_NC(GPP_S1, NONE),
	PAD_NC(GPP_S2, NONE),
	PAD_NC(GPP_S3, NONE),
	PAD_NC(GPP_S4, NONE),
	PAD_NC(GPP_S5, NONE),
	PAD_CFG_GPI(GPP_S6, NONE, DEEP),
	PAD_CFG_GPI(GPP_S7, NONE, DEEP),
	PAD_NC(GPP_T2, NONE),
	PAD_NC(GPP_T3, NONE),
	PAD_NC(GPP_U4, NONE),
	PAD_NC(GPP_U5, NONE),
};

void mainboard_configure_gpios(void)
{
	gpio_configure_pads(gpio_table, ARRAY_SIZE(gpio_table));
}
