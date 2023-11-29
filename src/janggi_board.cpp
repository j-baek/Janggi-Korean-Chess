#include "janggi_board.h"

// Constructor implementation
Janggi_Board::Janggi_Board() {
        // initialize board
        for (int i = 0; i < row; i++) {
            vector<string> board_row;
            for (int j = 0; j < col; j++) {
                board_row.push_back(".");
            }
            board.push_back(board_row);
        } 
    }

// Member functions
//void add_piece(int row, int col, std::str piece);

/*
    1   2   3   4   5   6   7   8   9 
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
9 | p | p | p | p | p | p | p | p | p | 
   - - - - - - - - - - - - - - - - - - 
*/
void Janggi_Board::display_board() {
    // first display all the row number
    cout<<"    1     2    3    4    5    6    7    8    9"<<endl;
    // now display the boarder line
    cout<<"   - - - - - - - - - - - - - - - - - - - - - - - "<<endl;

    for (int i = 0; i < row; i++) {
        cout<<i+1<<" | ";
        for (int j = 0; j < col; j++){
            cout<<board[i][j]<<" | ";
        }
        cout<<endl;;
        cout<<"   - - - - - - - - - - - - - - - - - - - - - - - "<<endl;
    }
}

void Janggi_Board::add_piece(int row, int col, string piece) {
    board[row][col] = piece;
}