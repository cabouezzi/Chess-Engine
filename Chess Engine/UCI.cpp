//
//  UCI.cpp
//  Chess Engine
//
//  Created by Chaniel Ezzi on 10/10/22.
//

#include "UCI.hpp"
#include <string>

void UCI::loop(int argc, const char **argv) {
    
    std::string line;
    
    do {
        std::cout << "> ";
        std::getline(std::cin, line);
        
    } while (line.find("quit"));
    
}
