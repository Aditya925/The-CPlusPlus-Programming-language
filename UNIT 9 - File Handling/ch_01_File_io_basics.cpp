#include <iostream>
#include <fstream>
#include <string>

int reading_file(){
    std::ifstream inputFile("example_file.txt");

    if (!inputFile){
        std::cerr << "Error opening the file." << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(inputFile, line)){
        std::cout << line << std::endl;
    }

    inputFile.close();
    return 0;
}


int writing_file(){
    std::ofstream outputFile("output.txt");

    if (!outputFile){
        std::cerr << "Error opening the file." << std::endl;
        return 1;
    }

    outputFile << "This is a line written to the file." << std::endl;
    outputFile << "We are writing to a file in C++." << std::endl;

    outputFile.close();
    return 0;
}

/*
    In both examples, we use the std::ifstream and std::ofstream objects to open the files for reading and 
    writing,respectively. We check if the file is successfully opened, and if not, display an error message. 
    For reading from a file, we use a while loop with getline to read the file line by line and print the content
    to the console. For writing to a file, we use the << operator to write data into the file.

    Remember to include <fstream> header for file I/O operations in C++. Also, it's essential to close the file 
    after finishing the operations using the .close() method on the file stream objects. The file streams will 
    automatically close the file when they go out of scope, but it's good practice to explicitly close them to 
    free resources promptly.
*/