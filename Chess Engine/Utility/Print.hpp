//
//  Print.hpp
//  Chess Engine
//
//  Created by Chaniel Ezzi on 10/10/22.
//

#ifndef Print_hpp
#define Print_hpp

#include <stdlib.h>
#include "bitboard.hpp"
#include "Board.hpp"

namespace Utility {

void print(const bitboard bb);
void print(const Board board);

}

#endif /* Print_hpp */
