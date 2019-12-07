#include "fuel_counter.h"
#include <cmath>

namespace calc
{

int FuelCounter::calculate()
{
    int result = 0;

    for (auto i = 0; i < data_.size(); i++)
    {
        int weight = std::stoi(data_[i]);
        int fuel = calc_module_fuel(weight);

        result += fuel;
    }

    return result;
}

int FuelCounter::calc_module_fuel(int weight)
{
    if (weight <= 0)
        return 0;

    int val = (int)floor(weight / 3.0) - 2;

    if (val <= 0)
        return 0;

    return val + calc_module_fuel(val);
}

}
