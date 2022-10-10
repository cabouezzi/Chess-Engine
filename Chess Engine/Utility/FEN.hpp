//
//  FEN.hpp
//  Chess Engine
//
//  Created by Chaniel Ezzi on 10/10/22.
//

#ifndef FEN_hpp
#define FEN_hpp

#include <stdio.h>
#include <string>
#include "Board.hpp"

namespace Utility {

void setFEN(const std::string fen, const Board* board);
std::string getFEN(const Board board);

}

#endif /* FEN_hpp */
