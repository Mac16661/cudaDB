#ifndef LOCALFILE_H
#define LOCALFILE_H

#include<string>
#include <sys/stat.h>
#include<sys/mman.h>
#include <fcntl.h>

#include "File.h"
#include "../Common/Types.h"

/*
    Handle local file i/o operatoins
*/

namespace LocalFile{
    class LocalFile : public File {
        LocalFile();

        bool checkValidPath(const std::string& path);

        Types::FileOpsStatus readFile(std::string& path, int startByte, char* buffer);

        Types::FileOpsStatus writeToFile(std::string& path, char* buffer); 
    };
}

#endif