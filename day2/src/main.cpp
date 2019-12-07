#include <string>
#include <vector>
#include <iostream>

#include "csv_reader.h"
#include "fuel_counter.h"

int main(int argc, char* argv[])
{
    (void)argc;
    (void)argv;

    csv::CSVReader csvReader = csv::CSVReader("data.csv");
    std::vector<std::string> data = csvReader.read();
    calc::FuelCounter fuelCounter = calc::FuelCounter(data);

    int result = fuelCounter.calculate();

    std::cout << "Fuel is: " << result << std::endl;

    return 0;
};
