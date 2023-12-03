#include "janggi_piece.h"
#include <math.h>

#define GENERAL_RED     "\033[31m漢\033[0m"
#define GENERAL_BLUE    "\033[34m楚\033[0m"

#define GUARD_RED       "\033[31m士\033[0m"
#define GUARD_BLUE      "\033[34m士\033[0m"

#define HORSE_RED       "\033[31m馬\033[0m"
#define HORSE_BLUE      "\033[34m馬\033[0m"

#define ELEPHANT_RED    "\033[31m象\033[0m"
#define ELEPHANT_BLUE   "\033[34m象\033[0m"

#define CHARIOT_RED     "\033[31m車\033[0m"
#define CHARIOT_BLUE    "\033[34m車\033[0m"

#define CANNON_RED      "\033[31m包\033[0m"
#define CANNON_BLUE     "\033[34m包\033[0m"

#define SOLDIER_RED     "\033[31m兵\033[0m"
#define SOLDIER_BLUE     "\033[34m卒\033[0m"

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

string Janggi_Piece::get_team_colour(){
    return team_colour;
}

bool Janggi_Piece::move(int new_row, int new_col){
    int p_row = get<0>(pos);
    int p_col = get<1>(pos);

    if(hanja == GENERAL_RED || GENERAL_BLUE) {
        if(abs(p_row - new_row) > 1 || abs(p_col - new_col) > 1) {
            cout<<"not valid move"<<endl;
            return false;
        } else {

            cout<<"valid move"<<endl;
            return true;
        }
    }
    return false;
}
void Janggi_Piece::renew_pos(tuple<int,int> new_pos){
    return;
}

tuple<int,int> Janggi_Piece::get_pos() {
    return pos;
}

