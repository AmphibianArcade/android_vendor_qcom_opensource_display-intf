// Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
// SPDX-License-Identifier: BSD-3-Clause-Clear

#ifndef __COMMON_DISPLAYCORRECTIONTYPECONFIG_H__
#define __COMMON_DISPLAYCORRECTIONTYPECONFIG_H__

#include <string>
/**
 * Display correction type config.
 */

typedef struct vendor_qti_hardware_display_common_DisplayCorrectionTypeConfig {
  struct V53SPRConfig {
    bool enable;
    int flip_x;
    int flip_y;
  };

  V53SPRConfig v53spr;

  bool CorrectionsEnabled() { return v53spr.enable; }

  void DebugPrint();
} vendor_qti_hardware_display_common_DisplayCorrectionTypeConfig;

#endif // __COMMON_DISPLAYCORRECTIONTYPECONFIG_H__
