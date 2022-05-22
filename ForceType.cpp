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

#include "MassType.h"
#include "AccelerationType.h"
#include "ForceType.h"

namespace Units
{
    Mass Force::operator/(const Acceleration& acceleration) const
    {
        return Kilograms(m_value / acceleration.BaseValue());
    }

    Acceleration Force::operator/(const Mass& mass) const
    {
        return MetersPerSecondSquared(m_value / Kilograms(mass));
    }
} //end namespace Units
