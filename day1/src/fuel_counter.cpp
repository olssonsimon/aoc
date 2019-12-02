#include "fuel_counter.h"
#include <cmath>

namespace calc
{

int FuelCounter::calculate()
{
    int result = 0;

    for (auto i = 0; i < data_.size(); i++)
    {
        double nr = std::stod(data_[i]);
        int val = static_cast<int>(floor(nr / 3.0)) - 2;

        result += val;
    }

    return result;
};

}

