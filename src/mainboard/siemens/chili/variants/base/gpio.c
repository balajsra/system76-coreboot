/* SPDX-License-Identifier: GPL-2.0-only */

#include <soc/gpio.h>
#include <mainboard/gpio.h>

static const struct pad_config gpio_table[] = {
/* GPP_A14  GPIO                  */ PAD_NC(GPP_A14, NONE),
/* GPP_A16  GPIO                  */ PAD_NC(GPP_A16, DN_20K),
/* GPP_B4   GPIO                  */ PAD_CFG_GPO(GPP_B4, 0, DEEP),
/* GPP_B5   GPIO                  */ PAD_NC(GPP_B5, NONE),
/* GPP_B6   GPIO                  */ PAD_NC(GPP_B6, NONE),
/* GPP_B8   GPIO                  */ PAD_NC(GPP_B8, NONE),
/* GPP_B10  GPIO                  */ PAD_NC(GPP_B10, NONE),
/* GPP_B11  GPIO                  */ PAD_CFG_GPO(GPP_B11, 1, DEEP),
/* GPP_B14  SPKR                  */ PAD_CFG_NF(GPP_B14, NONE, DEEP, NF1),
/* GPP_B18  GPIO                  */ PAD_NC(GPP_B18, NONE),
/* GPP_B22  GPIO                  */ PAD_NC(GPP_B22, NONE),
/* GPP_C2   GPIO                  */ PAD_NC(GPP_C2, NONE),
/* GPP_C5   GPIO                  */ PAD_NC(GPP_C5, NONE),
/* GPP_C6   SML1CLK               */ PAD_CFG_NF(GPP_C6, NONE, DEEP, NF1),
/* GPP_C7   SML1DATA              */ PAD_CFG_NF(GPP_C7, NONE, DEEP, NF1),
/* GPP_C8   GPIO                  */ PAD_NC(GPP_C8, NONE),
/* GPP_C9   GPIO                  */ PAD_NC(GPP_C9, NONE),
/* GPP_C12  GPIO                  */ PAD_CFG_GPI(GPP_C12, NONE, DEEP),
/* GPP_C13  GPIO                  */ PAD_CFG_GPI(GPP_C13, NONE, DEEP),
/* GPP_C14  GPIO                  */ PAD_CFG_GPI(GPP_C14, NONE, DEEP),
/* GPP_C15  GPIO                  */ PAD_CFG_GPI(GPP_C15, NONE, DEEP),
/* GPP_C16  I2C0_SDA              */ PAD_CFG_NF(GPP_C16, NONE, PLTRST, NF1),
/* GPP_C17  I2C0_SCL              */ PAD_CFG_NF(GPP_C17, NONE, DEEP, NF1),
/* GPP_C20  UART2_RXD             */ PAD_CFG_NF(GPP_C20, NONE, DEEP, NF1),
/* GPP_C21  UART2_TXD             */ PAD_CFG_NF(GPP_C21, NONE, DEEP, NF1),
/* GPP_C22  UART2_RTS#            */ PAD_CFG_NF(GPP_C22, NONE, DEEP, NF1),
/* GPP_C23  UART2_CTS#            */ PAD_CFG_NF(GPP_C23, NONE, DEEP, NF1),
/* GPP_D1   GPIO                  */ PAD_CFG_GPI(GPP_D1, NONE, DEEP),
/* GPP_D2   GPIO                  */ PAD_CFG_GPI(GPP_D2, NONE, DEEP),
/* GPP_D3   GPIO                  */ PAD_CFG_GPO(GPP_D3, 1, DEEP),
/* GPP_D7   GPIO                  */ PAD_CFG_GPI(GPP_D7, NONE, PLTRST),
/* GPP_D8   GPIO                  */ PAD_CFG_GPI(GPP_D8, NONE, PLTRST),
/* GPP_D17  DMIC_CLK1             */ PAD_CFG_NF(GPP_D17, NONE, DEEP, NF1),
/* GPP_D18  DMIC_DATA1            */ PAD_CFG_NF(GPP_D18, NONE, DEEP, NF1),
/* GPP_D19  DMIC_CLK0             */ PAD_CFG_NF(GPP_D19, NONE, DEEP, NF1),
/* GPP_D20  DMIC_DATA0            */ PAD_CFG_NF(GPP_D20, NONE, DEEP, NF1),
/* GPP_D21  GPIO                  */ PAD_CFG_GPO(GPP_D21, 1, DEEP),
/* GPP_D22  GPIO                  */ PAD_CFG_GPI(GPP_D22, NONE, DEEP),
/* GPP_G1   GPIO                  */ PAD_CFG_GPO(GPP_G1, 1, PLTRST),
/* GPP_G2   GPIO                  */ PAD_CFG_GPI(GPP_G2, NONE, PLTRST),
/* GPP_G3   GPIO                  */ PAD_CFG_GPI_APIC(GPP_G3, NONE, DEEP, LEVEL, INVERT),
/* I2S1_SFRM GPIO                 */ PAD_NC(I2S1_SFRM, NONE),
/* I2S1_TXD GPIO                  */ PAD_NC(I2S1_TXD, NONE),
/* GPD0     BATLOW#               */ PAD_CFG_NF(GPD0, NONE, DEEP, NF1),
/* GPD1     ACPRESENT             */ PAD_CFG_NF(GPD1, NATIVE, DEEP, NF1),
/* GPD7     GPIO                  */ PAD_CFG_GPO(GPD7, 0, RSMRST),
/* GPP_K0   GPIO                  */ PAD_CFG_GPI(GPP_K0, NONE, PLTRST),
/* GPP_K1   GPIO                  */ PAD_CFG_GPI(GPP_K1, NONE, PLTRST),
/* GPP_K2   GPIO                  */ PAD_CFG_GPI(GPP_K2, NONE, PLTRST),
/* GPP_K3   GPIO                  */ PAD_CFG_GPI(GPP_K3, NONE, PLTRST),
/* GPP_K4   GPIO                  */ PAD_CFG_GPO(GPP_K4, 1, PWROK),
/* GPP_K5   GPIO                  */ PAD_CFG_GPO(GPP_K5, 1, PWROK),
/* GPP_K8   GPIO                  */ PAD_NC(GPP_K8, NONE),
/* GPP_K9   GPIO                  */ PAD_NC(GPP_K9, NONE),
/* GPP_K10  GPIO                  */ PAD_NC(GPP_K10, NONE),
/* GPP_K11  GPIO                  */ PAD_NC(GPP_K11, NONE),
/* GPP_K20  GPIO                  */ PAD_CFG_GPO(GPP_K20, 1, PLTRST),
/* GPP_K21  GPIO                  */ PAD_NC(GPP_K21, NONE),
/* GPP_H0   GPIO                  */ PAD_CFG_GPI(GPP_H0, NONE, PLTRST),
/* GPP_H2   GPIO                  */ PAD_NC(GPP_H2, NONE),
/* GPP_H3   GPIO                  */ PAD_NC(GPP_H3, NONE),
/* GPP_H10  GPIO                  */ PAD_CFG_GPI(GPP_H10, NONE, DEEP),
/* GPP_H15  GPIO                  */ PAD_CFG_GPO(GPP_H15, 1, DEEP),
/* GPP_H17  GPIO                  */ PAD_CFG_GPO(GPP_H17, 1, DEEP),
/* GPP_E0   SATAXPCIE0            */ PAD_CFG_NF(GPP_E0, NONE, DEEP, NF1),
/* GPP_E1   GPIO                  */ PAD_NC(GPP_E1, NONE),
/* GPP_E2   GPIO                  */ PAD_NC(GPP_E2, NONE),
/* GPP_E4   SATA_DEVSLP0          */ PAD_CFG_NF(GPP_E4, NONE, DEEP, NF1),
/* GPP_E5   GPIO                  */ PAD_CFG_GPI(GPP_E5, NONE, DEEP),
/* GPP_E6   GPIO                  */ PAD_CFG_GPI(GPP_E6, NONE, DEEP),
/* GPP_E8   SATALED#              */ PAD_CFG_NF(GPP_E8, NONE, DEEP, NF1),
/* GPP_E9   USB2_OC0#             */ PAD_CFG_NF(GPP_E9, UP_20K, DEEP, NF1),
/* GPP_E10  USB2_OC1#             */ PAD_CFG_NF(GPP_E10, UP_20K, DEEP, NF1),
/* GPP_E11  USB2_OC2#             */ PAD_CFG_NF(GPP_E11, UP_20K, DEEP, NF1),
/* GPP_E12  GPIO                  */ PAD_CFG_GPO(GPP_E12, 1, PLTRST),
/* GPP_F1   GPIO                  */ PAD_NC(GPP_F1, NONE),
/* GPP_F2   GPIO                  */ PAD_NC(GPP_F2, NONE),
/* GPP_F3   GPIO                  */ PAD_NC(GPP_F3, NONE),
/* GPP_F4   GPIO                  */ PAD_NC(GPP_F4, NONE),
/* GPP_F5   GPIO                  */ PAD_CFG_GPO(GPP_F5, 1, PLTRST),
/* GPP_F6   SATA_DEVSLP4          */ PAD_CFG_NF(GPP_F6, NONE, DEEP, NF1),
/* GPP_F8   GPIO                  */ PAD_CFG_GPO(GPP_F8, 0, DEEP),
/* GPP_F9   GPIO                  */ PAD_CFG_GPO(GPP_F9, 0, DEEP),
/* GPP_F10  GPIO                  */ PAD_CFG_GPI(GPP_F10, NONE, PLTRST),
/* GPP_F13  GPIO                  */ PAD_CFG_GPI(GPP_F13, NONE, PLTRST),
/* GPP_F14  GPIO                  */ PAD_NC(GPP_F14, NONE),
/* GPP_F15  USB2_OC4#             */ PAD_CFG_NF(GPP_F15, UP_20K, DEEP, NF1),
/* GPP_F16  USB2_OC5#             */ PAD_CFG_NF(GPP_F16, UP_20K, DEEP, NF1),
/* GPP_F17  USB2_OC6#             */ PAD_CFG_NF(GPP_F17, UP_20K, DEEP, NF1),
/* GPP_F18  GPIO                  */ PAD_CFG_GPI_APIC(GPP_F18, NONE, DEEP, LEVEL, INVERT),
/* GPP_F19  eDP_VDDEN             */ PAD_CFG_NF(GPP_F19, NONE, DEEP, NF1),
/* GPP_F20  eDP_BKLTEN            */ PAD_CFG_NF(GPP_F20, NONE, DEEP, NF1),
/* GPP_F21  eDP_BKLTCTL           */ PAD_CFG_NF(GPP_F21, NONE, DEEP, NF1),
/* GPP_F22  DDPF_CTRLCLK          */ PAD_CFG_NF(GPP_F22, NONE, DEEP, NF1),
/* GPP_F23  DDPF_CTRLDATA         */ PAD_CFG_NF(GPP_F23, NONE, DEEP, NF1),
/* GPP_I0   DDPB_HPD0             */ PAD_CFG_NF(GPP_I0, NATIVE, DEEP, NF1),
/* GPP_I1   DDPB_HPD1             */ PAD_CFG_NF(GPP_I1, NATIVE, DEEP, NF1),
/* GPP_I2   DDPB_HPD2             */ PAD_CFG_NF(GPP_I2, NATIVE, DEEP, NF1),
/* GPP_I3   DDPB_HPD3             */ PAD_CFG_NF(GPP_I3, NONE, DEEP, NF1),
/* GPP_I4   EDP_HPD               */ PAD_CFG_NF(GPP_I4, NONE, DEEP, NF1),
/* GPP_I5   DDPB_CTRLCLK          */ PAD_CFG_NF(GPP_I5, NONE, DEEP, NF1),
/* GPP_I6   DDPB_CTRLDATA         */ PAD_CFG_NF(GPP_I6, NONE, DEEP, NF1),
/* GPP_I7   DDPC_CTRLCLK          */ PAD_CFG_NF(GPP_I7, NONE, DEEP, NF1),
/* GPP_I8   DDPC_CTRLDATA         */ PAD_CFG_NF(GPP_I8, NONE, DEEP, NF1),
/* GPP_I9   DDPD_CTRLCLK          */ PAD_CFG_NF(GPP_I9, DN_20K, DEEP, NF1),
/* GPP_I10  DDPD_CTRLDATA         */ PAD_CFG_NF(GPP_I10, DN_20K, DEEP, NF1),
/* GPP_J2   n/a                   */ PAD_CFG_NF(GPP_J2, NONE, DEEP, NF1),
/* GPP_J3   n/a                   */ PAD_CFG_NF(GPP_J3, NONE, DEEP, NF1),
/* GPP_J4   CNV_BRI_DT            */ PAD_CFG_NF(GPP_J4, NONE, DEEP, NF1),
/* GPP_J5   CNV_BRI_RSP           */ PAD_CFG_NF(GPP_J5, NONE, DEEP, NF1),
/* GPP_J6   CNV_RGI_DT            */ PAD_CFG_NF(GPP_J6, NONE, DEEP, NF1),
/* GPP_J7   CNV_RGI_RSP           */ PAD_CFG_NF(GPP_J7, NONE, DEEP, NF1),
/* GPP_J8   CNV_MFUART2_RXD       */ PAD_CFG_NF(GPP_J8, NONE, DEEP, NF1),
/* GPP_J9   CNV_MFUART2_TXD       */ PAD_CFG_NF(GPP_J9, NONE, DEEP, NF1),
/* GPP_J10  n/a                   */ PAD_CFG_NF(GPP_J10, NONE, DEEP, NF1),
/* GPP_J11  A4WP_PRESENT          */ PAD_CFG_NF(GPP_J11, NONE, DEEP, NF1),
};

void mainboard_configure_gpios(void)
{
	gpio_configure_pads(gpio_table, ARRAY_SIZE(gpio_table));
}
