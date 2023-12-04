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
        // check if the general is moving more than it can
        if(abs(p_row - new_row) > 1 || 
            abs(p_col - new_col) > 1) {return false;}

        if (team_colour == "red") {
            // when general_red is at center (1,4), it can move diagonally as well
            if(p_row == 1 && p_col == 4) {return true;}
            // general_red has to stay at its palace (0<= row <= 2),(3<= col <= 5)
            if(new_row >= 3) {return false;}
            if(new_col <= 2 || new_col >= 6) {return false;}
            // when general_red is not at center, it can move straight unless moving back to the center
            if(new_row == 1 && new_col == 4) {return true;}
            // moving straight means only changing either row or col, and not both
            if(abs(p_row - new_row) + abs(p_col - new_col) == 1) {return true;}
            return false;
        } else { // team colour == "blue"
            // when general_blue is at center (8,4), it can move diagonally as well
            if(p_row == 8 && p_col == 4) {return true;}
            // general_blue has to stay at its palace (7<= row <= 9),(3<= col <= 5)
            if(new_row <= 6) {return false;}
            if(new_col <= 2 || new_col >= 6) {return false;}
            // when genera_blue is not at center, it can move straight unless moving back to the center
            if(new_row == 8 && new_col == 4) {return true;}
            // moving straight means only changing either row or col, and not both
            if(abs(p_row - new_row) + abs(p_col - new_col) == 1) {return true;}
            return false;
        }

        return false;
    }
    /*
    if(hanja == GUARD_RED || GUARD_BLUE) {

    }
    if(hanja == HORSE_RED || HORSE_BLUE) {

    }
    if(hanja == ELEPHANT_RED || ELEPHANT_BLUE) {

    }
    if(hanja == CHARIOT_RED || CHARIOT_BLUE) {

    }
    if(hanja == CANNON_RED || CANNON_BLUE) {

    }
    if(hanja == SOLDIER_RED || SOLDIER_BLUE) {

    }
    */
    return false;
}
void Janggi_Piece::renew_pos(tuple<int,int> new_pos){
    pos = new_pos;
    return;
}

tuple<int,int> Janggi_Piece::get_pos() {
    return pos;
}

