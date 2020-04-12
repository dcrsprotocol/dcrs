// Copyright (c) 2012-2016, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2016-2018, The Karbowanec developers
// Copyright (c) 2019-2019, The Darkcrystal developers
//
//
// DCRS is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// DCRS is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with DCRS.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote {

struct CheckpointData {
  uint32_t height;
  const char* blockId;
};

const std::initializer_list<CheckpointData> CHECKPOINTS = { 
{  156,  "c43a517e514726d9e1a5aa330ff4df8cad75764abf9f83266bca4be3c7a16743" },
{ 1561,  "bc4141f9ebaa5549de28f6b5b82f5f47c26d698e061cdd058334a6aa6e680fde" },
{15610,  "1ea1e1171006f2b39bdf1cafca40db791c94901249594055dd8a09d9560289de" },
{20316,  "de0cb8cb62ad6debbe16e8b2b281f25b5d42fb73f16963fb7926394b7f406674" },
{56100,  "ec4270fc56c381bca6ec939b152558f53d053584e42813d8a846f8d9220d276d" },
{66390,  "e4df984a9bd6d86e856b7d74a62b2e1974ce890dc39f13d3c669965e9b0a533f" }
};
  
}

