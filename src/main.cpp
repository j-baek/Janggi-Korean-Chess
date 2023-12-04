#include <iostream>
#include "janggi_piece.h"
#include "janggi_board.h"

int main() {

    Janggi_Board b = Janggi_Board();

    b.display_board();

    int turn = 0;
    // game start
    while(true) {
        int row;
        int col;
        int new_row;
        int new_col;
        cout<<"please select a piece: (row, col)"<<endl;
        cin >> row >> col;
        Janggi_Piece p = b.get_board()[row][col];
        cout<<p.get_name()<<" chosed"<<endl;
    
        do {
            cout <<"please specify the position you want to move the piece to "<<endl;
            cin >> new_row >> new_col;

        } while(!b.renew_state(p, new_row, new_col));

        turn++;
    }





    return 0;
}
