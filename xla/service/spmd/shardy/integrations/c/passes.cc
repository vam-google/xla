/* Copyright 2025 The OpenXLA Authors.

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

#include "xla/service/spmd/shardy/integrations/c/passes.h"

#include "xla/service/spmd/shardy/sdy_round_trip/import_shardy_attrs.h"

void mlirRegisterAllXlaSdyPassesAndPipelines() {
  // TODO(b/426219837): Register all passes and pipelines of XLA Shardy.
  xla::sdy::registerSdyRoundTripImportShardyAttrsPass();
}
