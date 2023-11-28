#include <iostream>
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
    Janggi_Board board;
    vector<string> pieces;
    pieces.push_back(GENERAL_RED);
    pieces.push_back(GENERAL_BLUE);

    pieces.push_back(GUARD_RED);
    pieces.push_back(GUARD_BLUE);

    pieces.push_back(HORSE_RED);
    pieces.push_back(HORSE_BLUE);

    pieces.push_back(ELEPHANT_RED);
    pieces.push_back(ELEPAHNT_BLUE);



    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 9; j++) {
            board.add_piece(i, j, pieces[i]);
        }
    }

    board.display_board();

    return 0;
}