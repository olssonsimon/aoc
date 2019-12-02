#ifndef _FUEL_COUNTER_H_
#define _FUEL_COUNTER_H_

#include <string>
#include <vector>

namespace calc
{

class FuelCounter
{
    public:
        explicit FuelCounter(const std::vector<std::string> data) :
            data_(data) {};

        ~FuelCounter() {};

        int calculate();

    private:
        std::vector<std::string> data_;
};

}

#endif // _FUEL_COUNTER_H_