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
void Janggi_Board::display_board() {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;;
    }
}

void Janggi_Board::add_piece(int row, int col, string piece) {
    board[row][col] = piece;
}