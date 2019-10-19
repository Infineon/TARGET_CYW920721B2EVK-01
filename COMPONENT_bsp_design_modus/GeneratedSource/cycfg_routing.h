/*******************************************************************************
* File Name: cycfg_routing.h
*
* Description:
* Establishes all necessary connections between hardware elements.
* This file was automatically generated and should not be modified.
* cfg-backend-cli: 1.2.0.1449
*
********************************************************************************
* Copyright 2017-2019 Cypress Semiconductor Corporation
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
********************************************************************************/

#if !defined(CYCFG_ROUTING_H)
#define CYCFG_ROUTING_H

#if defined(__cplusplus)
extern "C" {
#endif

#include "cycfg_notices.h"
void init_cycfg_routing(void);
#define init_cycfg_connectivity() init_cycfg_routing()
#define ioss_0_pin_10_AUX UNKNOWN
#define ioss_0_pin_16_AUX UNKNOWN
#define ioss_0_pin_17_AUX UNKNOWN
#define ioss_0_pin_1_AUX UNKNOWN
#define ioss_0_pin_26_AUX UNKNOWN
#define ioss_0_pin_28_AUX UNKNOWN
#define ioss_0_pin_33_AUX UNKNOWN
#define ioss_0_pin_38_AUX UNKNOWN
#define ioss_0_pin_7_AUX UNKNOWN

#define amplifiers_0_rx_pu_0_TRIGGER_IN WICED_RX_PU
#define amplifiers_0_tx_pu_0_TRIGGER_IN WICED_TX_PU
#define audio_0_clk_0_TRIGGER_IN WICED_PCM_CLK_I2S_CLK
#define audio_0_di_in_0_TRIGGER_IN WICED_PCM_IN_I2S_DI
#define audio_0_do_out_0_TRIGGER_IN WICED_PCM_OUT_I2S_DO
#define audio_0_ws_sync_0_TRIGGER_IN WICED_PCM_SYNC_I2S_WS
#define i2c_0_scl_0_TRIGGER_IN WICED_I2C_1_SCL
#define i2c_0_sda_0_TRIGGER_IN WICED_I2C_1_SDA
#define uart_1_txd_0_TRIGGER_IN WICED_UART_2_TXD

#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_ROUTING_H */
