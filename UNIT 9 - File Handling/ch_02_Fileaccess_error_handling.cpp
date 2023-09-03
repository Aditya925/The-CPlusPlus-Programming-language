#include <iostream>
#include <fstream>
#include <string>

/*
    In C++, file access modes are used to specify how the file will be opened and accessed. There are three main file access modes:

       - std::ios::in: Open the file for reading.
       - std::ios::out: Open the file for writing. If the file already exists, its contents will be truncated. If it doesn't exist, a new file will be created.
       - std::ios::app: Open the file for writing, but append new data to the end of the file instead of truncating it.

    These access modes can be combined using bitwise OR (|) to perform multiple operations at once.
    Now, let's see how to use file access modes and handle errors in C++ file operations:
*/

// Reading from a file with error handling:

    int readfile_error_handling(){
        std::ifstream inputFile("input.txt", std::ios::in);

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

// Writing to a file with error handling

    int writefile_error_handling(){
        std::ofstream outputFile("output.txt", std::ios::out);

        if (!outputFile){
            std::cerr << "Error opening the file." << std::endl;
            return 1;
        }

        outputFile << "This is a line written to the file." << std::endl;
        outputFile << "We are writing to a file in C++." << std::endl;

        outputFile.close();
        return 0;
    }

// Appending to a file with error handling

    int appending_error_handling(){
        std::ofstream outputFile("output.txt", std::ios::out | std::ios::app);

        if (!outputFile){
            std::cerr << "Error opening the file." << std::endl;
            return 1;
        }

        outputFile << "This line will be appended to the file." << std::endl;

        outputFile.close();
        return 0;
    }

/*
    In all three examples, we use file streams (ifstream for reading and ofstream for writing) with the 
    specified access modes to perform the respective file operations. We check if the file was opened 
    successfully using the boolean context of the file stream objects or the is_open() method. If there 
    is an error in opening the file, we display an error message and return from the program.

    Proper error handling is essential when working with files because files may not always be available or 
    accessible. It helps ensure that your program behaves gracefully when encountering unexpected situations, 
    making it more robust and user-friendly
*/
