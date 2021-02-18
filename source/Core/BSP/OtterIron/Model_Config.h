/*
 * Model_Config.h
 *
 *  Created on: 25 Jul 2020
 *      Author: Ralim
 */

#ifndef OTTER_IRON_MODEL_CONFIG_H_
#define OTTER_IRON_MODEL_CONFIG_H_
/*
 * Lookup for mapping features <-> Models
 */

#if defined(MODEL_OtterIron) == 0
#error "No model defined!"
#endif


#ifdef MODEL_OtterIron
//#define POW_PD
#define TEMP_NTC
#define BATTFILTERDEPTH 8
#endif

#endif /* OTTER_IRON_MODEL_CONFIG_H_ */
