#ifndef _CSV_READER_H_
#define _CSV_READER_H_

#include <string>
#include <vector>

namespace csv
{

class CSVReader
{
    public:
        explicit CSVReader(std::string filename, std::string delimiter = ", ") :
            filename_(filename),
            delimiter_(delimiter) {};

        ~CSVReader() {};

        std::vector<std::string> read();

    private:
        std::string filename_;
        std::string delimiter_;
};

}

#endif // _CSV_READER_H_