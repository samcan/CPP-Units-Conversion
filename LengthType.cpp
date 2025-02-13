/*
Copyright 2022 Ben Saboff

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissionsand
limitations under the License.
*/

#include "TimeType.h"
#include "LengthType.h"
#include "SpeedType.h"

namespace Units
{
   Speed Length::operator/(const Time& time) const
   {
      // Base is meters
      return MetersPerSecond(m_value / Seconds(time));
   }
   Time Length::operator/(const Speed& speed) const
   {
      // Base is meters
      return Seconds(m_value / MetersPerSecond(speed));
   }
} //end namespace Units
