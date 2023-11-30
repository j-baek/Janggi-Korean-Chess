#include "janggi_piece.h"

// default constructor implementation
Janggi_Piece::Janggi_Piece() {
    hanja = " ";
    pos = make_tuple(-1,-1); // for all default piece, it has pos of (-1,-1)
    team_colour = "";
}
// constructor implementation
Janggi_Piece::Janggi_Piece(string name, tuple<int,int> position , string team) {
    // set the private variable
    hanja = name;
    pos = position;
    team_colour = team;
}

// Member functions
string get_name() {
    return hanja;
}
bool move(int row, int col){
    return true;
}
void renew_pos(){
    return;
}