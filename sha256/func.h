#include <iostream>
#include <fstream>
void get_file_to_function()
        {
            char path_to_file[] = "";
            std::cin>>path_to_file;
            std::ifstream fin;
            fin.open(path_to_file);
        }