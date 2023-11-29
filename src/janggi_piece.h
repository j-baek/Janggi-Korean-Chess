#include <iostream>

// header guard start
#ifndef JANGGI_PIECE_H
#define JANGGI_BOARD_H

using namespace std;

class Janggi_Piece {
public:
    // Constructor
    Janggi_Piece(string name, int pos_row, int pos_col, string team);

    // Member functions
    bool move(int row, int col);
    // renew the position
    void renew_pos(int row, int col);


private:
    string hanja; // name of the piece
    int pos_r;
    int pos_c;
    string team_colour;
}



// header guard end
#endif