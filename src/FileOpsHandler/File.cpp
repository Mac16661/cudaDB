#include "../../include/FileOpsHandler/File.h"


virtual File::~File();
virtual Types::FileOpsStatus File::readFile(std::string& path, int startByte, char* buffer);
virtual Types::FileOpsStatus File::writeFile(std::string& path, char* buffer);