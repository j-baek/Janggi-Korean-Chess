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
    // unique_ptr automatically delets its memory allocation when needed
    unique_ptr<Janggi_Piece> chariot_red_1 = make_unique<Janggi_Piece>(CHARIOT_RED, 0,0,"red");
    unique_ptr<Janggi_Piece> elephant_red_1 = make_unique<Janggi_Piece>(ELEPHANT_RED, 0,1,"red");
    unique_ptr<Janggi_Piece> horse_red_1 = make_unique<Janggi_Piece>(HORSE_RED, 0,2,"red");
    unique_ptr<Janggi_Piece> guard_red_1 = make_unique<Janggi_Piece>(GUARD_RED, 0,3,"red");
    unique_ptr<Janggi_Piece> guard_red2 = make_unique<Janggi_Piece>(GUARD_RED, 0,5,"red");
    unique_ptr<Janggi_Piece> elephenat_red_2 = make_unique<Janggi_Piece>(ELEPHANT_RED, 0,6,"red");
    unique_ptr<Janggi_Piece> horse_red_2 = make_unique<Janggi_Piece>(HORSE_RED, 0,7,"red");
    unique_ptr<Janggi_Piece> chariot_red_2 = make_unique<Janggi_Piece>(CHARIOT_RED, 0,8,"red");

    unique_ptr<Janggi_Piece> general_red = make_unique<Janggi_Piece>(GENERAL_RED, 1,4,"red");

    unique_ptr<Janggi_Piece> cannon_red_1 = make_unique<Janggi_Piece>(CANNON_RED, 2,1,"red");
    unique_ptr<Janggi_Piece> cannon_red_2 = make_unique<Janggi_Piece>(CANNON_RED, 2,7,"red");

    unique_ptr<Janggi_Piece> soldier_red_1 = make_unique<Janggi_Piece>(SOLDIER_RED, 3,0,"red");
    unique_ptr<Janggi_Piece> soldier_red_2 = make_unique<Janggi_Piece>(SOLDIER_RED, 3,2,"red");
    unique_ptr<Janggi_Piece> soldier_red_3 = make_unique<Janggi_Piece>(SOLDIER_RED, 3,4,"red");
    unique_ptr<Janggi_Piece> soldier_red_4 = make_unique<Janggi_Piece>(SOLDIER_RED, 3,6,"red");
    unique_ptr<Janggi_Piece> soldier_red_5 = make_unique<Janggi_Piece>(SOLDIER_RED, 3,8,"red");



    vector<vector<Janggi_Piece>> pieces;
    for (int r = 0; r < 9; r++) {
        for (int c = 0; c < 9; c++) {
        }
    }


    board.display_board();

    return 0;
}