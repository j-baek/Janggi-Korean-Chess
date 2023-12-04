#include <iostream>
#include "janggi_piece.h"
#include "janggi_board.h"

int main() {

    Janggi_Board b = Janggi_Board();

    Janggi_Piece general_red = b.get_board()[1][4];
    Janggi_Piece general_blue = b.get_board()[8][4];
    /*
    //void renew_state(Janggi_Piece p1, int new_row, int new_col);
    b.renew_state(general_red, 2,5);
    general_red = b.get_board()[2][5];
    b.renew_state(general_red, 2,4);
    general_red = b.get_board()[2][4];
    b.renew_state(general_red, 2,3);
    general_red = b.get_board()[2][3];
    b.renew_state(general_red, 2,2);
    general_red = b.get_board()[2][2];

    //b.renew_state(general_red, 2,6);
    */
    int turn = 0;
    while(true) {
        b.display_board();
        int row;
        int col;
        int new_row;
        int new_col;
        cout<<"please select a piece: (row, col)"<<endl;
        cin >> row;
        cin >> col;
        Janggi_Piece p = b.get_board()[row][col];
        cout<<p.get_name()<<" chosed"<<endl;
        
        cout <<"please specify the position you want to move the piece to "<<endl;
        cin >> new_row;
        cin >> new_col;
        b.renew_state(p, new_row, new_col);

        turn++;
    }





    return 0;
}
