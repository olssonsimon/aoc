#include "csv_reader.h"
#include <fstream>
#include <iostream>

namespace csv
{

std::vector<std::string> CSVReader::read()
{
    std::ifstream file(filename_);
    std::vector<std::string> data;

    if (file.is_open())
    {
        std::string line = "";
        while(getline(file, line))
        {
            data.push_back(line);
        }
        file.close();
    }

    std::cout << "Read: " << data.size() << " lines" << std::endl;

    return data;
};

}
