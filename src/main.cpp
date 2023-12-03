#include <iostream>
#include "janggi_piece.h"
#include "janggi_board.h"

int main() {

    Janggi_Board b = Janggi_Board();
    b.display_board();

    Janggi_Piece p1 = b.get_board()[0][0];
    tuple<int,int> new_pos(6,2);
    b.renew_state(p1, new_pos);

    b.display_board();

    Janggi_Piece general_b = b.get_board()[8][4];
    bool moving = general_b.move(10,10);
    cout<<moving<<endl;

    moving = general_b.move(8,3);
    cout<<moving<<endl;
    
    tuple<int,int> new_pos2(8,5);
    b.renew_state(general_b, new_pos2);
    tuple<int,int> new_pos3(8,6);
    b.renew_state(general_b,new_pos2);

    return 0;
}
