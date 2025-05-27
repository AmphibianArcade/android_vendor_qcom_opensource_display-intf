/*
 * Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: BSD-3-Clause-Clear
 */

#ifndef __SDM_COMPOSITOR_SIDEBAND_CB_V2_INTF_H__
#define __SDM_COMPOSITOR_SIDEBAND_CB_V2_INTF_H__

#include "sdm_compositor_sideband_cb_intf.h"

namespace sdm {

class SDMSideBandCompositorCbIntfV2 : public SDMSideBandCompositorCbIntf {
public:
  virtual ~SDMSideBandCompositorCbIntfV2() {}

  // gpu display correction
  virtual int DisplayCorrectionBlit(uint64_t display, const void *dst,
                                    const void *src, int32_t src_fence_fd) = 0;
  virtual int InitDisplayCorrection(uint64_t display,
                                    uint64_t display_correction_config_type,
                                    bool is_secure) = 0;
  virtual void DestroyDisplayCorrection(uint64_t display) = 0;
};

} //  namespace sdm

#endif //  __SDM_COMPOSITOR_SIDEBAND_CB_V2_INTF_H__
