/* SPDX-License-Identifier: GPL-2.0-only */

#include <mainboard/gpio.h>
#include <soc/gpio.h>

static const struct pad_config gpio_table[] = {
	PAD_CFG_NF(GPP_A00, UP_20K, PLTRST, NF1),
	PAD_CFG_NF(GPP_A01, UP_20K, PLTRST, NF1),
	PAD_CFG_NF(GPP_A02, UP_20K, PLTRST, NF1),
	PAD_CFG_NF(GPP_A03, UP_20K, PLTRST, NF1),
	PAD_CFG_NF(GPP_A04, UP_20K, PLTRST, NF1),
	PAD_CFG_NF(GPP_A05, UP_20K, PLTRST, NF1),
	PAD_CFG_NF(GPP_A06, NONE, PLTRST, NF1),
	PAD_NC(GPP_A07, NONE),
	PAD_NC(GPP_A08, NONE),
	PAD_NC(GPP_A09, NONE),
	PAD_NC(GPP_A10, NONE),
	PAD_CFG_GPI(GPP_A11, NONE, PLTRST),
	PAD_CFG_GPI(GPP_A12, NONE, PLTRST),
	PAD_CFG_GPI(GPP_A13, UP_20K, PLTRST),
	PAD_CFG_GPI(GPP_A14, UP_20K, PLTRST),
	PAD_CFG_GPI(GPP_A15, NONE, PLTRST),
	PAD_CFG_NF(GPP_A16, UP_20K, PLTRST, NF1),
	PAD_CFG_GPI(GPP_A17, UP_20K, PLTRST),
	PAD_CFG_GPI(GPP_A18, UP_20K, PLTRST),
	PAD_CFG_GPI(GPP_A19, UP_20K, DEEP),
	PAD_CFG_GPI(GPP_A20, NATIVE, DEEP),
	PAD_CFG_NF(GPP_A21, NATIVE, DEEP, NF1),
	PAD_CFG_GPI(GPP_B00, NONE, PLTRST),
	PAD_CFG_GPI(GPP_B01, NONE, PLTRST),
	PAD_CFG_GPI(GPP_B02, NONE, PLTRST),
	PAD_CFG_GPI(GPP_B03, NONE, PLTRST),
	PAD_CFG_GPI(GPP_B04, NONE, PLTRST),
	PAD_CFG_GPI(GPP_B05, NONE, PLTRST),
	PAD_CFG_GPI(GPP_B06, NONE, PLTRST),
	PAD_CFG_GPI(GPP_B07, NONE, PLTRST),
	PAD_CFG_GPO(GPP_B08, 1, PLTRST),
	PAD_CFG_GPI(GPP_B09, NONE, PLTRST),
	PAD_CFG_GPI(GPP_B10, NONE, PLTRST),
	PAD_CFG_GPI(GPP_B11, NONE, PLTRST),
	PAD_CFG_GPI(GPP_B12, NONE, PLTRST),
	PAD_CFG_NF(GPP_B13, NONE, PLTRST, NF1),
	PAD_CFG_GPI(GPP_B14, NONE, PLTRST),
	PAD_CFG_GPI(GPP_B15, NONE, PLTRST),
	PAD_CFG_NF(GPP_B16, NONE, PLTRST, NF2),
	PAD_CFG_GPI(GPP_B17, NONE, PLTRST),
	PAD_CFG_GPO(GPP_B18, 1, PLTRST),
	PAD_CFG_GPO(GPP_B19, 1, PLTRST),
	PAD_CFG_GPI(GPP_B20, NONE, PLTRST),
	PAD_CFG_GPI(GPP_B21, NONE, PLTRST),
	PAD_CFG_GPI(GPP_B22, NONE, PLTRST),
	PAD_CFG_GPI(GPP_B23, NONE, PLTRST),
	PAD_CFG_NF(GPP_C00, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_C01, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_C02, NONE, DEEP, NF1),
	PAD_CFG_GPI(GPP_C03, NONE, PLTRST),
	PAD_CFG_GPI(GPP_C04, NONE, PLTRST),
	PAD_CFG_NF(GPP_C05, UP_20K, PLTRST, NF1),
	PAD_CFG_NF(GPP_C06, UP_20K, PLTRST, NF1),
	PAD_CFG_GPI(GPP_C07, NONE, PLTRST),
	PAD_CFG_NF(GPP_C08, NONE, PLTRST, NF1),
	PAD_CFG_NF(GPP_C09, NONE, PLTRST, NF1),
	PAD_CFG_GPI(GPP_C10, NONE, PLTRST),
	PAD_CFG_NF(GPP_C11, NONE, PLTRST, NF1),
	PAD_CFG_NF(GPP_C12, NONE, PLTRST, NF1),
	PAD_CFG_GPI(GPP_C13, NONE, PLTRST),
	PAD_NC(GPP_C14, NONE),
	PAD_CFG_NF(GPP_C15, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_C16, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_C17, NONE, DEEP, NF1),
	PAD_NC(GPP_C18, NONE),
	PAD_NC(GPP_C19, NONE),
	PAD_CFG_GPI(GPP_C20, NONE, PLTRST),
	PAD_CFG_NF(GPP_C21, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_C22, NONE, DEEP, NF1),
	PAD_CFG_GPI(GPP_C23, NONE, PLTRST),
	PAD_CFG_GPO(GPP_D00, 0, PWROK),
	PAD_CFG_GPI(GPP_D01, NONE, PLTRST),
	PAD_CFG_GPI(GPP_D02, NONE, PLTRST),
	PAD_CFG_GPI(GPP_D03, NONE, PLTRST),
	PAD_CFG_GPO(GPP_D04, 1, PWROK),
	PAD_CFG_GPO(GPP_D05, 1, PLTRST),
	PAD_CFG_GPO(GPP_D06, 1, PLTRST),
	PAD_CFG_GPO(GPP_D07, 1, PLTRST),
	PAD_CFG_GPO(GPP_D08, 1, PLTRST),
	PAD_CFG_GPO(GPP_D09, 0, PWROK),
	PAD_CFG_NF(GPP_D10, NONE, PLTRST, NF1),
	PAD_CFG_NF(GPP_D11, NATIVE, PLTRST, NF1),
	PAD_CFG_NF(GPP_D12, NATIVE, PLTRST, NF1),
	PAD_CFG_NF(GPP_D13, NATIVE, PLTRST, NF1),
	PAD_CFG_GPI(GPP_D14, NONE, PLTRST),
	PAD_CFG_GPI(GPP_D15, NONE, PLTRST),
	PAD_CFG_GPI(GPP_D16, NONE, PLTRST),
	PAD_CFG_NF(GPP_D17, NONE, PLTRST, NF1),
	PAD_CFG_NF(GPP_D18, NONE, DEEP, NF1),
	PAD_NC(GPP_D19, NONE),
	PAD_CFG_NF(GPP_D20, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_D21, NONE, DEEP, NF1),
	PAD_CFG_GPI(GPP_D22, NATIVE, PLTRST),
	PAD_CFG_GPI(GPP_D23, NATIVE, PLTRST),
	PAD_CFG_GPI(GPP_E00, NONE, PLTRST),
	PAD_CFG_GPI(GPP_E01, NONE, PLTRST),
	PAD_CFG_GPI(GPP_E02, NONE, PLTRST),
	PAD_CFG_GPI(GPP_E03, NONE, PLTRST),
	PAD_CFG_GPO(GPP_E04, 0, PLTRST),
	PAD_CFG_GPO(GPP_E05, 1, PLTRST),
	PAD_CFG_GPI(GPP_E06, NONE, PLTRST),
	PAD_CFG_GPI(GPP_E07, NONE, PLTRST),
	PAD_CFG_NF(GPP_E08, NONE, PLTRST, NF1),
	PAD_CFG_GPI(GPP_E09, NONE, PLTRST),
	PAD_CFG_GPI(GPP_E10, NONE, PLTRST),
	PAD_CFG_GPI(GPP_E11, NONE, PLTRST),
	PAD_CFG_GPI(GPP_E12, NONE, PLTRST),
	PAD_CFG_GPI(GPP_E13, NONE, PLTRST),
	PAD_CFG_NF(GPP_E14, NONE, PLTRST, NF1),
	PAD_CFG_GPI(GPP_E15, NONE, PLTRST),
	PAD_CFG_NF(GPP_E16, NONE, PLTRST, NF2),
	PAD_CFG_GPI(GPP_E17, NONE, PLTRST),
	PAD_NC(GPP_E18, NONE),
	PAD_NC(GPP_E19, NONE),
	PAD_NC(GPP_E20, NONE),
	PAD_NC(GPP_E21, NONE),
	PAD_CFG_NF(GPP_E22, DN_20K, PLTRST, NF1),
	PAD_CFG_NF(GPP_F00, NONE, PLTRST, NF1),
	PAD_CFG_NF(GPP_F01, UP_20K, PLTRST, NF1),
	PAD_CFG_NF(GPP_F02, NONE, PLTRST, NF1),
	PAD_CFG_NF(GPP_F03, UP_20K, PLTRST, NF1),
	PAD_CFG_NF(GPP_F04, NONE, PLTRST, NF1),
	PAD_CFG_NF(GPP_F05, NONE, PLTRST, NF3),
	PAD_CFG_NF(GPP_F06, NONE, PLTRST, NF1),
	PAD_CFG_TERM_GPO(GPP_F07, 1, DN_20K, PWROK),
	PAD_CFG_GPI(GPP_F08, DN_20K, PLTRST),
	PAD_CFG_GPI(GPP_F09, NONE, PLTRST),
	PAD_CFG_GPI(GPP_F10, NONE, PLTRST),
	PAD_CFG_GPI(GPP_F11, NONE, PLTRST),
	PAD_CFG_GPI(GPP_F12, NONE, PLTRST),
	PAD_CFG_GPI(GPP_F13, NONE, PLTRST),
	PAD_CFG_GPI(GPP_F14, NONE, PLTRST),
	PAD_CFG_GPI(GPP_F15, NONE, PLTRST),
	PAD_CFG_GPI(GPP_F16, NONE, PLTRST),
	PAD_CFG_GPI(GPP_F17, NONE, PLTRST),
	PAD_CFG_GPI(GPP_F18, NONE, PLTRST),
	PAD_CFG_GPI(GPP_F19, NONE, PLTRST),
	PAD_CFG_GPI(GPP_F20, NONE, PLTRST),
	PAD_CFG_GPI(GPP_F21, NONE, PLTRST),
	PAD_CFG_GPI(GPP_F22, NONE, PLTRST),
	PAD_CFG_GPI(GPP_F23, NONE, PLTRST),
	PAD_CFG_GPI(GPP_H00, NONE, PLTRST),
	PAD_CFG_GPI(GPP_H01, NONE, PLTRST),
	PAD_CFG_GPI(GPP_H02, NONE, PLTRST),
	PAD_NC(GPP_H03, NONE),
	PAD_CFG_NF(GPP_H04, NONE, PLTRST, NF2),
	PAD_CFG_NF(GPP_H05, NONE, PLTRST, NF2),
	PAD_CFG_GPI(GPP_H06, UP_20K, PLTRST),
	PAD_CFG_GPI(GPP_H07, UP_20K, PLTRST),
	PAD_CFG_GPI(GPP_H08, NONE, PLTRST),
	PAD_CFG_GPI(GPP_H09, NONE, PLTRST),
	PAD_CFG_GPI(GPP_H10, NONE, PLTRST),
	PAD_CFG_GPI(GPP_H11, NONE, PLTRST),
	PAD_NC(GPP_H12, NONE),
	PAD_CFG_GPI(GPP_H13, NONE, PLTRST),
	PAD_CFG_GPI(GPP_H14, NONE, PLTRST),
	PAD_CFG_GPO(GPP_H15, 1, PLTRST),
	PAD_CFG_NF(GPP_H16, NONE, PLTRST, NF1),
	PAD_CFG_NF(GPP_H17, NONE, PLTRST, NF1),
	PAD_NC(GPP_H18, NONE),
	PAD_CFG_NF(GPP_H19, NONE, PLTRST, NF1),
	PAD_CFG_NF(GPP_H20, NONE, PLTRST, NF1),
	PAD_CFG_GPO(GPP_H21, 1, PLTRST),
	PAD_CFG_GPI(GPP_H22, NONE, PLTRST),
	PAD_CFG_GPI(GPP_S00, NONE, PLTRST),
	PAD_CFG_GPI(GPP_S01, NONE, PLTRST),
	PAD_CFG_GPI(GPP_S02, NONE, PLTRST),
	PAD_CFG_GPI(GPP_S03, NONE, PLTRST),
	PAD_CFG_GPI(GPP_S04, NONE, PLTRST),
	PAD_CFG_GPI(GPP_S05, NONE, PLTRST),
	PAD_CFG_GPI(GPP_S06, NONE, PLTRST),
	PAD_CFG_GPI(GPP_S07, NONE, PLTRST),
	PAD_CFG_NF(GPP_V00, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_V01, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_V02, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_V03, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_V04, NONE, DEEP, NF1),
	PAD_CFG_NF(GPP_V05, UP_20K, PLTRST, NF1),
	PAD_CFG_NF(GPP_V06, NATIVE, PLTRST, NF1),
	PAD_CFG_NF(GPP_V07, NATIVE, PLTRST, NF1),
	PAD_CFG_NF(GPP_V08, UP_20K, PLTRST, NF1),
	PAD_CFG_NF(GPP_V09, NONE, PLTRST, NF1),
	PAD_CFG_NF(GPP_V10, NONE, PLTRST, NF1),
	PAD_CFG_GPI(GPP_V11, NONE, PLTRST),
	PAD_NC(GPP_V12, NONE),
	PAD_CFG_NF(GPP_V13, NONE, PLTRST, NF1),
	PAD_CFG_GPI(GPP_V14, NONE, PLTRST),
	PAD_CFG_GPI(GPP_V15, NONE, PLTRST),
	PAD_CFG_GPI(GPP_V16, NONE, PLTRST),
	PAD_CFG_GPI(GPP_V17, NONE, PLTRST),
	PAD_NC(GPP_V18, NONE),
	PAD_CFG_NF(GPP_V19, NONE, PLTRST, NF1),
	PAD_NC(GPP_V20, NONE),
	PAD_NC(GPP_V21, NONE),
	PAD_NC(GPP_V22, NONE),
	PAD_NC(GPP_V23, NONE),
};

void mainboard_configure_gpios(void)
{
	gpio_configure_pads(gpio_table, ARRAY_SIZE(gpio_table));
}
