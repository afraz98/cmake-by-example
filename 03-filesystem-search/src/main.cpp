#include <iostream>
#include <boost/filesystem.hpp>
#include <boost/range/iterator.hpp>

int main() {
    boost::filesystem::path path = "/home/toeknee/.bashrc";
    if(boost::filesystem::exists(path)){
        std::cout << "File exists!" << std::endl;
    } else {
        std::cout << "File does NOT exist." << std::endl;
    }   return 0;
}