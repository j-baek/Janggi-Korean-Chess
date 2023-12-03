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

    return 0;
}
