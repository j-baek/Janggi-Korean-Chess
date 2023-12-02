#include "janggi_piece.h"

// default constructor implementation
Janggi_Piece::Janggi_Piece() {
    hanja = "  ";
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
string Janggi_Piece::get_name(){
    return hanja;
}
bool Janggi_Piece::move(int row, int col){
    return true;
}
void Janggi_Piece::renew_pos(tuple<int,int> new_pos){
    return;
}

tuple<int,int> Janggi_Piece::get_pos() {
    return pos;
}

void Janggi_Piece::renew_state(string name, tuple<int,int> position, string team){
    hanja = name;
    pos = position;
    team_colour = team;
}
