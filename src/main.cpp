#include <bits/stdc++.h>
using namespace std;

// TODO: Cout is taking most of the time here may do it asyncly
void getReadLinePerformance () {
    std:: ifstream inputFile("../DB/RandomData1mill.csv");

    if(!inputFile) {
        std::cerr<<"Err: file not found on the location"<<std::endl;
    }

    std::string line;
    while(std::getline(inputFile, line)) {
        // std::cout<<line<<std::endl;
        // if(line == "\"6\";\"Sheri\";\"Turner\";\"Sheri29@gmail.com\""){
        //     cout<<line<<endl;
        // }
    }

     inputFile.close();
}

void getReadCharPerformance() {
    std::ifstream inputFile("../DB/RandomData.csv");

    if (!inputFile) {
        std::cerr << "Error: Could not open the file!" << std::endl;
        
    }

    char ch;
    while (inputFile.get(ch)) {
        // std::cout << ch;  
    }
    cout<<std::endl;

    inputFile.close();
}

void getReadBufferPerformance() {
    std::ifstream inputFile("../DB/RandomData.csv");

    if (!inputFile) {
        std::cerr << "Error: Could not open the file!" << std::endl;
    }


    std::stringstream buffer;
    buffer << inputFile.rdbuf();  

    std::string fileContent = buffer.str();
    // std::cout << fileContent << std::endl;

    inputFile.close();
}

int main()
{
    cout << "Simple DB" << endl;
    

    auto start = std::chrono::high_resolution_clock::now();

    getReadLinePerformance(); 
    // getReadCharPerformance(); 
    // getReadBufferPerformance();  

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> elapsed = end - start;

    std::cout << "Elapsed time: " << elapsed.count() << " ms" << std::endl;
    return 0;
}