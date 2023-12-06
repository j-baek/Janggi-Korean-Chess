#include <iostream>
#include <cstdlib>
#include "janggi_piece.h"
#include "janggi_board.h"

#define GENERAL_RED     "\033[31m漢\033[0m"
#define GENERAL_BLUE    "\033[34m楚\033[0m"

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
    // if general is dead, games ends
    bool general_found = true;
    // game start
    while(general_found) {
        int row;
        int col;
        int new_row;
        int new_col;
        string team;
        int turn_indicate = 0;

        do {
            cout <<"Plase select a piece: (row, col)"<<endl;
            cin >> row >> col;
            // check if row and col are within the board boundaries
            if(!(row < 0 || row >= b.get_board_row() || 
                col < 0 || col >= b.get_board_col())){
            
                team = b.get_board()[row][col].get_team_colour();
                if(team == "blue") {
                turn_indicate = 0;
                } else if(team == "red"){
                    turn_indicate = 1;
                } else {
                    turn_indicate = -1;
                }    
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

        // check if either general is dead
        general_found = false;
        // if previous turn was red's turn, check blue team's place
        // and vice versa
        if(turn % 2 == 0) { // previous turn would return 1, meaning red team's turn
            // check blue team's palace
            // row 7~9
            // col 3~5
            for(int r = 7; r <= 9; r++) {
                for(int c= 3; c <= 5; c++) {
                    if(b.get_board()[r][c].get_name() == GENERAL_BLUE) {
                        general_found = true;
                    }
                }
            }
            if(general_found == false) {
                cout <<"red team win!"<<endl<<endl;
            }
        } else {
            // check red team's palace
            // row 0~2
            // col 3~5
            general_found = false;
            for(int r = 0; r <= 2; r++) {
                for(int c = 3; c <= 5; c++) {
                    if(b.get_board()[r][c].get_name() == GENERAL_RED) {
                        general_found = true;
                    }
                }
            }
            if(general_found == false) {
                cout <<"blue team win!"<<endl<<endl;
            }
        }
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
