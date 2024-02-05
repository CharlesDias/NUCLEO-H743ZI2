/**
  ******************************************************************************
  * @file    flowers_data_params.h
  * @author  AST Embedded Analytics Research Platform
  * @date    Mon Feb  5 11:28:08 2024
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */

#ifndef FLOWERS_DATA_PARAMS_H
#define FLOWERS_DATA_PARAMS_H
#pragma once

#include "ai_platform.h"

/*
#define AI_FLOWERS_DATA_WEIGHTS_PARAMS \
  (AI_HANDLE_PTR(&ai_flowers_data_weights_params[1]))
*/

#define AI_FLOWERS_DATA_CONFIG               (NULL)


#define AI_FLOWERS_DATA_ACTIVATIONS_SIZES \
  { 229888, }
#define AI_FLOWERS_DATA_ACTIVATIONS_SIZE     (229888)
#define AI_FLOWERS_DATA_ACTIVATIONS_COUNT    (1)
#define AI_FLOWERS_DATA_ACTIVATION_1_SIZE    (229888)



#define AI_FLOWERS_DATA_WEIGHTS_SIZES \
  { 416628, }
#define AI_FLOWERS_DATA_WEIGHTS_SIZE         (416628)
#define AI_FLOWERS_DATA_WEIGHTS_COUNT        (1)
#define AI_FLOWERS_DATA_WEIGHT_1_SIZE        (416628)



#define AI_FLOWERS_DATA_ACTIVATIONS_TABLE_GET() \
  (&g_flowers_activations_table[1])

extern ai_handle g_flowers_activations_table[1 + 2];



#define AI_FLOWERS_DATA_WEIGHTS_TABLE_GET() \
  (&g_flowers_weights_table[1])

extern ai_handle g_flowers_weights_table[1 + 2];


#endif    /* FLOWERS_DATA_PARAMS_H */
