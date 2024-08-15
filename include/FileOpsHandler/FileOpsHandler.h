#ifndef FILEOPSHANDLER_H
#define FILEOPSHANDLER_H

#include <string>

#include "LocalFile.h"
#include "../Common/Types.h"
// #include "S3File.h" TODO: to be implemented in future

/*
    Factory design pattern implemented to handle different file i/o operation based on type and location
*/

namespace FileOpsHandler{
    class FileOpsHandler{
        public:
            static Types::FileOpsStatus readFileContent(Types::FileLocation location, std::string& path, int startByte, char* buffer);

            static Types::FileOpsStatus appendContentToFile(Types::FileLocation location , std::string& path, char* buffer);
    }
}

#endif