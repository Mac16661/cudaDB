#ifndef FILE_H
#define FILE_H

#include<string>
#include<vector>

#include "../Common/Types.h"

/*
    Base file class
*/

class File{
    protected:
        // Ensureing proper cleanup from derived class
        virtual ~File();
        virtual Types::FileOpsStatus readFile(std::string& path, int startByte, char* buffer);
        virtual Types::FileOpsStatus writeFile(std::string& path, char* buffer);
};

#endif