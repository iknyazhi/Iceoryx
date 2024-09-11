// Copyright (c) 2020 - 2021 by Apex.AI Inc. All rights reserved.
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
//
// SPDX-License-Identifier: Apache-2.0

#ifndef IOX_EXAMPLES_ICEPERF_EXAMPLE_COMMON_HPP
#define IOX_EXAMPLES_ICEPERF_EXAMPLE_COMMON_HPP

enum class Benchmark
{
    ALL,
    LATENCY,
    THROUGHPUT
};

enum class Technology
{
    ALL,
    ICEORYX_CPP_API,
    ICEORYX_CPP_WAIT_API,
    ICEORYX_C_API,
    POSIX_MESSAGE_QUEUE,
    UNIX_DOMAIN_SOCKET
};

enum class RunFlag
{
    STOP,
    RUN
};

#endif
