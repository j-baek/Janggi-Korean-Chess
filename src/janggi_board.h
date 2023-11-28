#include <iostream>
#include <vector>

// header guard is a mechanism used to prevent a header file 
// from being included more than once in a translation unit
// header guard start
#ifndef JANGGI_BOARD_H
#define JANGGI_BOARD_H

using namespace std;

class Janggi_Board {
public:
    // Constructor
    Janggi_Board();

    // Member functions
    void display_board();
    void add_piece(int row, int col, string piece);


private:
    int row = 9;
    int col = 9;
    vector<vector<string>> board;

};


// header guard end
#endif