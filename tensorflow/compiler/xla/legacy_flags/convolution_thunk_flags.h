/* Copyright 2017 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#ifndef TENSORFLOW_COMPILER_XLA_LEGACY_FLAGS_CONVOLUTION_THUNK_FLAGS_H_
#define TENSORFLOW_COMPILER_XLA_LEGACY_FLAGS_CONVOLUTION_THUNK_FLAGS_H_

// Legacy flags for XLA's convolution_thunk module.

#include <vector>

#include "tensorflow/core/platform/types.h"
#include "tensorflow/core/util/command_line_flags.h"

namespace xla {
namespace legacy_flags {

// Append to *flag_list flag definitions associated with XLA's convolution_thunk
// module.
void AppendConvolutionThunkFlags(std::vector<tensorflow::Flag>* flag_list);

// The values of flags associated with XLA's convolution_thunk module.
typedef struct {
  // Auto-tune the algorithm used by convolution
  bool xla_gpu_autotune_convolution_algorithm;
} ConvolutionThunkFlags;

// Return a pointer to the ConvolutionThunkFlags struct;
// repeated calls return the same pointer.
// This should be called only after Flags::Parse() has returned.
ConvolutionThunkFlags* GetConvolutionThunkFlags();

}  // namespace legacy_flags
}  // namespace xla

#endif  // TENSORFLOW_COMPILER_XLA_LEGACY_FLAGS_CONVOLUTION_THUNK_FLAGS_H_
