#include "janggi_piece.h"

// Constructor implementation
Janggi_Piece::Janggi_Piece(string name, int pos_row, int pos_col, string team) {
    // set the private variable
    hanja = name;
    pos_r = pos_row;
    pos_c = pos_col;
    team_colour = team;
}

// Member functions
bool move(int row, int col){
    return true;
}
void renew_pos(){
    return;
}