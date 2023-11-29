#include <iostream>
#include <vector>
#include "janggi_piece.h"

// header guard is a mechanism used to prevent a header file 
// from being included more than once in a translation unit
// header guard start
#ifndef JANGGI_BOARD_H
#define JANGGI_BOARD_H

using namespace std;

class Janggi_Board {
public:
    // Constructor
    Janggi_Board(vector<vector<Janggi_Piece>> j_pieces);

    // Member functions
    // display current state of the board
    void display_board();

private:
    int row = 9;
    int col = 9;
    vector<vector<string>> board;
    vector<vector<Janggi_Piece>> janggi_state;
};


// header guard end
#endif