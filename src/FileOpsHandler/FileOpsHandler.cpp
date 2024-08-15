#include "../../include/FileOpsHandler/FileOpsHandler.h"

/* Implementation of factory design pattern call the appropriate class to handle low level file i/o
*/

static Types::FileOpsStatus FileOpsHandler::readFileContent(FileLocation location, std::string& path, int startByte, char* buffer) {
    /*
        Reads file content by calling appropriate function fiven file type and location
        Arguemnts:
            location (string): Where file is located local/s3 bucket
            path (string): The file path
            startByte (integer): The starting byte position for reading(inclusive).
            endByte (integer): The ending byte position for reading (inclusive).
        Returns: void
    */

    if(location == Types::LOCALFILE) {
        LocalFile::LocalFile ops = new LocalFile();

        Types::FileOpsStatus status = ops.readFile( path, startByte, buffer); 

        if(status == Types::NOTEXIST) {
            cout<<"File not found in the given path"<<endl;
            return Types::NOTEXIST;
        }

        if(status == Types::ERROR) {
            cout<<"Error while performing read operation"<<endl;
            return Types::ERROR;
        }
    }

    return Types::SUCCESS;
}

static Types::FileOpsStatus FileOpsHandler::appendContentToFile(FileLocation location, std::string& path, char* buffer) {
    /*
        Writes contens to the file by calling approproate low level file i/o function
        Arguments:
            location (string): Where file is located local/s3 bucket
            path (string): The file path
            content (vector<string>): content to write
        Returns: void
    */

    if(location == Types::LOCALFILE) {
        LocalFile::LocalFile ops = new LocalFile();

        Types::FileOpsStatus status = ops.writeToFile( path, buffer); 

        if(status== Types::ERROR) {
            cout<<"Error while appeneding content to file"<<endl;
            return Types::ERROR;
        }
    }

    return Types::SUCCESS; 
}