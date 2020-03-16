// Copyright 2020 Tencent
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once
#include <numeric>

#include "turbo_transformers/core/tensor.h"

namespace turbo_transformers {
namespace layers {
namespace kernels {

template <typename T>
extern void LayerNorm(const core::Tensor& gamma, const core::Tensor& beta,
                      core::Tensor* out_tensor);

template <typename T>
extern void AddBiasLayerNorm(const core::Tensor& input_tensor,
                             const core::Tensor& bias_tensor,
                             const core::Tensor& gamma_tensor,
                             const core::Tensor& beta_tensor,
                             core::Tensor* out_tensor);

}  // namespace kernels
}  // namespace layers
}  // namespace turbo_transformers
