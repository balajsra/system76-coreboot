/* SPDX-License-Identifier: GPL-2.0-only */

#include <arch/stages.h>
#include <soc/qclib_common.h>
#include "board.h"
#include <soc/shrm.h>

void platform_romstage_main(void)
{
	shrm_fw_load_reset();
	/* QCLib: DDR init & train */
	qclib_load_and_run();

	/* This rail needs to be stable by the time we take the FPMCU out of
	   reset in ramstage, so already turn it on here. This needs to happen
	   at least 200ms after this pin was first driven low in the bootblock. */
	if (CONFIG(HEROBRINE_HAS_FINGERPRINT))
		gpio_output(GPIO_EN_FP_RAILS, 1);
}
