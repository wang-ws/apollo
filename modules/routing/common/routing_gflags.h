/******************************************************************************
  * Copyright 2017 The Apollo Authors. All Rights Reserved.
  *
  * Licensed under the Apache License, Version 2.0 (the "License");
  * you may not use this file except in compliance with the License.
  * You may obtain a copy of the License at
  *
  * http://www.apache.org/licenses/LICENSE-2.0
  *
  * Unless required by applicable law or agreed to in writing, software
  * distributed under the License is distributed on an "AS IS" BASIS,
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  *****************************************************************************/

#ifndef MODULES_ROUTING_COMMON_ROUTING_GFLAGS_H_
#define MODULES_ROUTING_COMMON_ROUTING_GFLAGS_H_

#include "gflags/gflags.h"

DECLARE_string(node_name);
DECLARE_string(node_namespace);
DECLARE_string(signal_probe_service);

DECLARE_bool(enable_old_routing);
DECLARE_string(route_topic_for_broadcast);
DECLARE_bool(use_road_id);

DECLARE_string(map_dir);
DECLARE_string(map_file_name);
DECLARE_string(graph_dir);
DECLARE_string(graph_file_name);

DECLARE_string(rosparam_name_routing_init_status);

DECLARE_bool(enable_debug_mode);
DECLARE_string(debug_route_path);
DECLARE_string(debug_passage_region_path);

DECLARE_double(base_speed);
DECLARE_double(left_turn_penalty);
DECLARE_double(right_turn_penalty);
DECLARE_double(uturn_penalty);
DECLARE_double(change_penalty);
DECLARE_double(base_changing_length);

#endif  // MODULES_ROUTING_COMMON_ROUTING_GFLAGS_H_
