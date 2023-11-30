#include <iostream>
#include <tuple>

// header guard start
#ifndef JANGGI_PIECE_H
#define JANGGI_BOARD_H

using namespace std;

class Janggi_Piece {
public:
    // default constructor: this default piece acts as a place holder.
    Janggi_Piece();
    // constructor
    Janggi_Piece(string name, tuple<int,int> position, string team);

    // member functions
    // get the name
    string get_name();
    // move the janggi piece to point with (row,col)
    bool move(int row, int col);
    // renew the position
    void renew_pos(tuple<int,int> new_pos);
    // get the position
    tuple<int,int> get_pos();


private:
    string hanja; // name of the piece
    tuple<int,int> pos; // position of the janggi piece, represents (row, col)
    string team_colour;
};

// header guard end
#endif