//
//  main.cpp
//  Chess Engine
//
//  Created by Chaniel Ezzi on 10/10/22.
//

#include <iostream>
#include <string>
#include "UCI.hpp"

int main(int argc, const char **argv) {
    
    UCI::loop(argc, argv);
    
    return 0;
    
}
