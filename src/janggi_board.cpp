#include "janggi_board.h"

#define GENERAL_RED     "\033[31m漢\033[0m"
#define GENERAL_BLUE    "\033[34m楚\033[0m"

#define GUARD_RED       "\033[31m士\033[0m"
#define GUARD_BLUE      "\033[34m士\033[0m"

#define HORSE_RED       "\033[31m馬\033[0m"
#define HORSE_BLUE      "\033[34m馬\033[0m"

#define ELEPHANT_RED    "\033[31m象\033[0m"
#define ELEPHANT_BLUE   "\033[34m象\033[0m"

#define CHARIOT_RED     "\033[31m車\033[0m"
#define CHARIOT_BLUE    "\033[34m車\033[0m"

#define CANNON_RED      "\033[31m包\033[0m"
#define CANNON_BLUE     "\033[34m包\033[0m"

#define SOLDIER_RED     "\033[31m兵\033[0m"
#define SOLDIER_BLUE     "\033[34m卒\033[0m"

// Constructor implementation
Janggi_Board::Janggi_Board() {
   // initialize the board with janggi_pieces
// red team
   vector<vector<Janggi_Piece>> j_matrix(row, vector<Janggi_Piece>(col));

   j_matrix[0][0] = Janggi_Piece(CHARIOT_RED, make_tuple(0,0),"red");
   j_matrix[0][1] = Janggi_Piece(ELEPHANT_RED, make_tuple(0,1),"red");
   j_matrix[0][2] = Janggi_Piece(HORSE_RED, make_tuple(0,2),"red");
   j_matrix[0][3] = Janggi_Piece(GUARD_RED, make_tuple(0,3),"red");
   j_matrix[0][5] = Janggi_Piece(GUARD_RED, make_tuple(0,5),"red");
   j_matrix[0][6] = Janggi_Piece(ELEPHANT_RED, make_tuple(0,6),"red");
   j_matrix[0][7] = Janggi_Piece(HORSE_RED, make_tuple(0,7),"red");
   j_matrix[0][8] = Janggi_Piece(CHARIOT_RED, make_tuple(0,8),"red");

   j_matrix[1][4] = Janggi_Piece(GENERAL_RED, make_tuple(1,4),"red");

   j_matrix[2][1] = Janggi_Piece(CANNON_RED, make_tuple(2,1),"red");
   j_matrix[2][7] = Janggi_Piece(CANNON_RED, make_tuple(2,7),"red");

   j_matrix[3][0] = Janggi_Piece(SOLDIER_RED, make_tuple(3,0),"red");
   j_matrix[3][2] = Janggi_Piece(SOLDIER_RED, make_tuple(3,2),"red");
   j_matrix[3][4] = Janggi_Piece(SOLDIER_RED, make_tuple(3,4),"red");
   j_matrix[3][6] = Janggi_Piece(SOLDIER_RED, make_tuple(3,6),"red");
   j_matrix[3][8] = Janggi_Piece(SOLDIER_RED, make_tuple(3,8),"red");

   // blue team
   j_matrix[9][0] = Janggi_Piece(CHARIOT_BLUE, make_tuple(9,0),"blue");
   j_matrix[9][1] = Janggi_Piece(ELEPHANT_BLUE, make_tuple(9,1),"blue");
   j_matrix[9][2] = Janggi_Piece(HORSE_BLUE, make_tuple(9,2),"blue");
   j_matrix[9][3] = Janggi_Piece(GUARD_BLUE, make_tuple(9,3),"blue");
   j_matrix[9][5] = Janggi_Piece(GUARD_BLUE, make_tuple(9,5),"blue");
   j_matrix[9][6] = Janggi_Piece(ELEPHANT_BLUE, make_tuple(9,6),"blue");
   j_matrix[9][7] = Janggi_Piece(HORSE_BLUE, make_tuple(9,7),"blue");
   j_matrix[9][8] = Janggi_Piece(CHARIOT_BLUE, make_tuple(9,8),"blue");

   j_matrix[8][4] = Janggi_Piece(GENERAL_BLUE, make_tuple(8,4),"blue");

   j_matrix[7][1] = Janggi_Piece(CANNON_BLUE, make_tuple(7,1),"blue");
   j_matrix[7][7] = Janggi_Piece(CANNON_BLUE, make_tuple(7,7),"blue");

   j_matrix[6][0] = Janggi_Piece(SOLDIER_BLUE, make_tuple(6,0),"blue");
   j_matrix[6][2] = Janggi_Piece(SOLDIER_BLUE, make_tuple(6,2),"blue");
   j_matrix[6][4] = Janggi_Piece(SOLDIER_BLUE, make_tuple(6,4),"blue");
   j_matrix[6][6] = Janggi_Piece(SOLDIER_BLUE, make_tuple(6,6),"blue");
   j_matrix[6][8] = Janggi_Piece(SOLDIER_BLUE, make_tuple(6,8),"blue");

   board = j_matrix;

}

// Member functions
/*
    0   1   2   3   4   5   6   7   8   9
   - - - - - - - - - - - - - - - - - - - - 
0 | p | p | p | p | p | p | p | p | p | p |
   - - - - - - - - - - - - - - - - - - - - 
1 | p | p | p | p | p | p | p | p | p | p |
   - - - - - - - - - - - - - - - - - - - - 
2 | p | p | p | p | p | p | p | p | p | p |
   - - - - - - - - - - - - - - - - - - - -
3 | p | p | p | p | p | p | p | p | p | p |
   - - - - - - - - - - - - - - - - - - - - 
4 | p | p | p | p | p | p | p | p | p | p |
   - - - - - - - - - - - - - - - - - - - -
5 | p | p | p | p | p | p | p | p | p | p |
   - - - - - - - - - - - - - - - - - - - -
6 | p | p | p | p | p | p | p | p | p | p |
   - - - - - - - - - - - - - - - - - - - -
7 | p | p | p | p | p | p | p | p | p | p |
   - - - - - - - - - - - - - - - - - - - -
8 | p | p | p | p | p | p | p | p | p | p |
   - - - - - - - - - - - - - - - - - - - -
*/
void Janggi_Board::display_board() {
   // first display all the row number
   cout<<"    0     1    2    3    4    5    6    8    9"<<endl;
   // now display the boarder line
   cout<<"   - - - - - - - - - - - - - - - - - - - - - - - "<<endl;

   for (int i = 0; i < row; i++) {
      cout<<i<<" | ";
      for (int j = 0; j < col; j++){
         cout<<board[i][j].get_name()<<" | ";
      }
      cout<<endl;;
      cout<<"   - - - - - - - - - - - - - - - - - - - - - - - "<<endl;
   }
   cout<<endl<<endl;

}

vector<vector<Janggi_Piece>> Janggi_Board::get_board() {
   return board;
}

void Janggi_Board::renew_state(Janggi_Piece p1, int new_row, int new_col) {
   // tuple first element = row, second element = col
   tuple<int,int> p1_pos = p1.get_pos();
   int curr_row = get<0>(p1_pos);
   int curr_col = get<1>(p1_pos);
   
   // renew position for p1 when
   // new position is in the boundary
   // new position is not attacking its own team
   // new position is a valid move
   if(new_row >= 0 && new_col >= 0 && 
      new_row < row && new_col < col &&
      board[new_row][new_col].get_team_colour() != p1.get_team_colour() &&
      p1.move(new_row, new_col) == true){

      // condition for horse: it cannot jump over other piece
      if(p1.get_name() == HORSE_RED || p1.get_name() == HORSE_BLUE) {
         if(abs(new_row - curr_row) == 1) { // means it moves left or right first (col) then move diagonally
            // check if it is trying to jump over
            // if the piece next to p1 is dummy piece, the team colour is an empty string
            if(new_col > curr_col && !board[curr_row][curr_col +1].get_team_colour().empty()) {return;}
            // when new_col < curr_col
            if(!board[curr_row][curr_col -1].get_team_colour().empty()) {return;}
         } else { // when difference between new row and new col == 2, means it moves up or down first (row), then move diagonally
            if(new_row > curr_row && !board[curr_row +1][curr_col].get_team_colour().empty()) {return;}
            if(!board[curr_row -1][curr_col].get_team_colour().empty()) {return;}
         }
      }
      
      tuple<int,int> new_pos(new_row,new_col);
      p1.renew_pos(new_pos);

      // for a current position, put a dummy piece
      Janggi_Piece dummy = Janggi_Piece();
      board[curr_row][curr_col] = dummy;
      // put p1 on a new position
      board[new_row][new_col] = p1;

      display_board();
   } else {
      cout<<"invalid move!"<<endl;
   }

   return;
}
