#include "janggi_board.h"

// Constructor implementation
Janggi_Board::Janggi_Board(vector<vector<Janggi_Piece>> j_pieces) {
    // set the private variable
    janggi_state = j_pieces;
    // initialize board
    for (int i = 0; i < row; i++) {
        vector<Janggi_Piece> board_row;
        for (int j = 0; j < col; j++) {
            board_row.push_back(janggi_state[i][j]);
        }
        board.push_back(board_row);
    } 
}

// Member functions
/*
    0   1   2   3   4   5   6   7   8 
   - - - - - - - - - - - - - - - - - - 
0 | p | p | p | p | p | p | p | p | p | 
   - - - - - - - - - - - - - - - - - - 
1 | p | p | p | p | p | p | p | p | p | 
   - - - - - - - - - - - - - - - - - - 
2 | p | p | p | p | p | p | p | p | p | 
   - - - - - - - - - - - - - - - - - - 
3 | p | p | p | p | p | p | p | p | p | 
   - - - - - - - - - - - - - - - - - - 
4 | p | p | p | p | p | p | p | p | p | 
   - - - - - - - - - - - - - - - - - - 
5 | p | p | p | p | p | p | p | p | p | 
   - - - - - - - - - - - - - - - - - - 
6 | p | p | p | p | p | p | p | p | p | 
   - - - - - - - - - - - - - - - - - - 
7 | p | p | p | p | p | p | p | p | p | 
   - - - - - - - - - - - - - - - - - - 
8 | p | p | p | p | p | p | p | p | p | 
   - - - - - - - - - - - - - - - - - - 
*/
void Janggi_Board::display_board() {
    // first display all the row number
    cout<<"    0     1    2    3    4    5    6    8    9"<<endl;
    // now display the boarder line
    cout<<"   - - - - - - - - - - - - - - - - - - - - - - - "<<endl;

    for (int i = 0; i < row; i++) {
        cout<<i<<" | ";
        for (int j = 0; j < col; j++){
            cout<<board[i][j]<<" | ";
        }
        cout<<endl;;
        cout<<"   - - - - - - - - - - - - - - - - - - - - - - - "<<endl;
    }
}