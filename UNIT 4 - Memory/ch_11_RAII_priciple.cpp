#include <iostream>
#include <fstream>
#include <string>

/*
    Resource Acquisition Is Initialization (RAII) is a C++ programming principle that helps manage
    resources, such as memory, file handles, and network connections, in a safe and automatic way. 
    RAII is based on the idea that the lifetime of a resource should be tied to the lifetime of an 
    object. When an object is created, it acquires the resource, and when the object goes out of scope
    or is destroyed, it automatically releases the resource.

    The primary mechanism used to implement RAII in C++ is through constructors and destructors of classes. 
    When an object is created (constructor called), it acquires the resource, and when the object is
    destroyed (destructor called), it releases the resource. This way, the resource management becomes automatic, 
    and you don't have to worry about explicitly freeing the resource, leading to cleaner and more robust code.
*/

/* 
     Here's a simple example to illustrate RAII with a resource that needs to be acquired and released explicitly.
     Resource class to manage file handles using RAII
 */

    class FileHandleRAII{
        public:
            explicit FileHandleRAII(const std::string& filename) : file(filename) {
                if (!file.is_open()) {
                    throw std::runtime_error("Failed to open file: " + filename);
                }
            }
            ~FileHandleRAII(){
                if (file.is_open()) {
                    file.close();
                }
            }
            // Provide public access to the file handle
            std::ifstream& getFile(){
                return file;
            }
        private:
            std::ifstream file;
        };

    int raii_principle(){
        try {
            FileHandleRAII fileHandle("example.txt");

            // Use the file handle to read data from the file
            std::string line;
            while (std::getline(fileHandle.getFile(), line)) {
                std::cout << line << std::endl;
            }

            // The file handle will be automatically closed when 'fileHandle' goes out of scope
        } 
        catch (const std::exception& ex) {
            std::cerr << "Error: " << ex.what() << std::endl;
        }

        return 0;
    }

/*
    In this example, we have a FileHandleRAII class that manages file handles using RAII. The constructor
    opens the file and the destructor closes the file. When an object of FileHandleRAII is created in the 
    raii_principle() function, it automatically acquires the file handle, and when it goes out of scope at the end of 
    the raii_principle() function or in case of an exception, the destructor is automatically called, and the file is closed.

    RAII is a powerful technique for resource management in C++. It can be used not only for file handles 
    but also for managing dynamic memory, network connections, and any other resources that require proper 
    acquisition and release. RAII ensures that resource management is automatic, exception-safe, and makes 
    the code more readable and maintainable.
*/