#include "../../include/FileOpsHandler/LocalFile.h"


bool LocalFile::checkValidPath(const std::string& path) {
    /*
        Checks if the path is valid or not.
        Arguments:
            path (string): The file path
        Returns: true/false
    */
    return filesystem::exists(path);
}

Types::FileOpsStatus LocalFile::readFile(std::string& path, int startByte, char* buffer) {
    /*
        Reads a file given its path and a specified byte range.
        Arguments:
            path (string): The file path.
            startByte (integer): The starting byte position for reading (inclusive).
            endByte (integer): The ending byte position for reading (inclusive).
        Returns: void
    */
    if(checkValidPath(path)){
        return Types::NOTEXIST;
    }

    try{
        int fd = open(path, O_RDONLY);

        stat fileStat;
        fstat(fd, &fileStat);

        buffer = static_cast<char*>(mmap(nullptr, fileStat.st_size, PROT_READ, MAP_PRIVATE, fd, startByte));

        munmap(buffer, fileSize);
    } catch (...) {
        return Types::ERROR;
    }
    

    return Types::SUCCESS;
}

Types::FileOpsStatus LocalFile::writeToFile(std::string& path, char* buffer) {
    /*
        Appends content to a file at a specified path.
        Arguments:
            path (string): The file path.
            buffer (ptr to char arr): The data to be appended to the file.
        Returns: SUCCESS if ops is successful or ERROR
    */

    try {
        int fd = open(path, O_RDWR | O_CREAT, 0666);

        stat fileStat;
        fstat(fd, &fileStat);

        buffer = static_cast<char*>(mmap(nullptr, fileStat.st_size, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0));

        
        // strcpy(buffer, content);

        ftruncate(fd, fileStat.st_size + strlen(buffer));

        munmap(buffer, fileStat.st_size);
        
        close(fd);
    }catch (...) {
        return Types::ERROR;
    }

    return Types::SUCCESS;
    
}