#include <iostream>
#include <cstdlib>
#include "janggi_piece.h"
#include "janggi_board.h"

void play_game();
void clear_terminal();

int main() {

    play_game();

    return 0;
}

void play_game() {
    Janggi_Board b = Janggi_Board();
    clear_terminal();
    b.display_board();

    // when turn is even, blue team's turn, and when odd, red team's turn
    int turn = 0;
    // game start
    while(true) {
        int row;
        int col;
        int new_row;
        int new_col;
        string team;
        int turn_indicate = 0;

        do {
            cout <<"Plase select a piece: (row, col)"<<endl;
            cin >> row >> col;
            team = b.get_board()[row][col].get_team_colour();
            if(team == "blue") {
                turn_indicate = 0;
            } else if(team == "red"){
                turn_indicate = 1;
            } else {
                turn_indicate = -1;
            }            
            // if the piece is a dummpy piece, or is not their team, keep looping
        } while(team.empty() || turn_indicate != (turn % 2)); 
        Janggi_Piece p = b.get_board()[row][col];
        cout<<p.get_name()<<" chosed"<<endl;
    
        do {
            cout <<"please specify the position you want to move the piece to "<<endl;
            cin >> new_row >> new_col;

        } while(!b.renew_state(p, new_row, new_col));

        turn++;
        clear_terminal();
        b.display_board();
    }

    return;
}

void clear_terminal() {
    #ifdef _WIN32
        system("cls"); // for Windows
    #elif __linux__ || __unix__ || __APPLE__
        system("clear");
    #else 
        // unsupported os
        #error "Unsupported operating system"
    #endif
}
