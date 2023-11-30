#include <iostream>
#include "janggi_piece.h"
#include "janggi_board.h"

#define GENERAL_RED     "\033[31m漢\033[0m"
#define GENERAL_BLUE    "\033[34m楚\033[0m"

#define GUARD_RED       "\033[31m士\033[0m"
#define GUARD_BLUE      "\033[34m士\033[0m"

#define HORSE_RED       "\033[31m馬\033[0m"
#define HORSE_BLUE      "\033[34m馬\033[0m"

#define ELEPHANT_RED    "\033[31m象\033[0m"
#define ELEPAHNT_BLUE   "\033[34m象\033[0m"

#define CHARIOT_RED     "\033[31m車\033[0m"
#define CHARIOT_BLUE    "\033[34m車\033[0m"

#define CANNON_RED      "\033[31m包\033[0m"
#define CANNON_BLUE     "\033[34m包\033[0m"

#define SOLDIER_RED     "\033[31m兵\033[0m"
#define SOLDIER_BLUE     "\033[34m卒\033[0m"


int main() {

    vector<vector<Janggi_Piece>> janggi_2d_matrix(10, vector<Janggi_Piece>(10));

    // unique_ptr automatically delets its memory allocation when needed
    // red team
    janggi_2d_matrix[0,0] = Janggi_Piece(CHARIOT_RED, make_tuple(0,0),"red");
    janggi_2d_matrix[0,1] = Janggi_Piece(ELEPHANT_RED, make_tuple(0,1),"red");
    janggi_2d_matrix[0,2] = Janggi_Piece(HORSE_RED, make_tuple(0,2),"red");
    janggi_2d_matrix[0,3] = Janggi_Piece(GUARD_RED, make_tuple(0,3),"red");
    janggi_2d_matrix[0,5] = Janggi_Piece(GUARD_RED, make_tuple(0,5),"red");
    janggi_2d_matrix[0,6] = Janggi_Piece(ELEPHANT_RED, make_tuple(0,6),"red");
    janggi_2d_matrix[0,7] = Janggi_Piece(HORSE_RED, make_tuple(0,7),"red");
    janggi_2d_matrix[0,8] = Janggi_Piece(CHARIOT_RED, make_tuple(0,8),"red");

    janggi_2d_matrix[1,4] = Janggi_Piece(GENERAL_RED, make_tuple(1,4),"red");

    janggi_2d_matrix[2,1] = Janggi_Piece(CANNON_RED, make_tuple(2,1),"red");
    janggi_2d_matrix[2,7] = Janggi_Piece(CANNON_RED, make_tuple(2,7),"red");

    janggi_2d_matrix[3,0] = Janggi_Piece(SOLDIER_RED, make_tuple(3,0),"red");
    janggi_2d_matrix[3,2] = Janggi_Piece(SOLDIER_RED, make_tuple(3,2),"red");
    janggi_2d_matrix[3,4] = Janggi_Piece(SOLDIER_RED, make_tuple(3,4),"red");
    janggi_2d_matrix[3,6] = Janggi_Piece(SOLDIER_RED, make_tuple(3,6),"red");
    janggi_2d_matrix[3,8] = Janggi_Piece(SOLDIER_RED, make_tuple(3,8),"red");

    // blue team
    janggi_2d_matrix[9,0] = Janggi_Piece(CHARIOT_BLUE, make_tuple(9,0),"blue");
    janggi_2d_matrix[9,1] = Janggi_Piece(ELEPHANT_BLUE, make_tuple(9,1),"blue");
    janggi_2d_matrix[9,2] = Janggi_Piece(HORSE_BLUE, make_tuple(9,2),"blue");
    janggi_2d_matrix[9,3] = Janggi_Piece(GUARD_BLUE, make_tuple(9,3),"blue");
    janggi_2d_matrix[9,5] = Janggi_Piece(GUARD_BLUE, make_tuple(9,5),"blue");
    janggi_2d_matrix[9,6] = Janggi_Piece(ELEPHANT_BLUE, make_tuple(9,6),"blue");
    janggi_2d_matrix[9,7] = Janggi_Piece(HORSE_BLUE, make_tuple(9,7),"blue");
    janggi_2d_matrix[9,8] = Janggi_Piece(CHARIOT_BLUE, make_tuple(9,8),"blue");

    janggi_2d_matrix[8,4] = Janggi_Piece(GENERAL_BLUE, make_tuple(8,4),"blue");

    janggi_2d_matrix[7,1] = Janggi_Piece(CANNON_BLUE, make_tuple(7,1),"blue");
    janggi_2d_matrix[7,7] = Janggi_Piece(CANNON_BLUE, make_tuple(7,7),"blue");

    janggi_2d_matrix[6,0] = Janggi_Piece(SOLDIER_BLUE, make_tuple(6,0),"blue");
    janggi_2d_matrix[6,2] = Janggi_Piece(SOLDIER_BLUE, make_tuple(6,2),"blue");
    janggi_2d_matrix[6,4] = Janggi_Piece(SOLDIER_BLUE, make_tuple(6,4),"blue");
    janggi_2d_matrix[6,6] = Janggi_Piece(SOLDIER_BLUE, make_tuple(6,6),"blue");
    janggi_2d_matrix[6,8] = Janggi_Piece(SOLDIER_BLUE, make_tuple(6,8),"blue");

    Janggi_Board board = Janggi_Board(janggi_2d_matrix);


    board.display_board();

    return 0;
}