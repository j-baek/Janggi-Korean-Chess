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
   cout<<"    0     1    2    3    4    5    6    7    8"<<endl;
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

// return true if renewing state is available. Return false otherwise
bool Janggi_Board::renew_state(Janggi_Piece p1, int new_row, int new_col) {
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
      
      int abs_row = abs(new_row - curr_row);

      // condition for horse: it cannot jump over other piece
      if(p1.get_name() == HORSE_RED || p1.get_name() == HORSE_BLUE) {
         if(abs_row == 1) { // means it moves left or right first (col) then move diagonally
            // check if it is trying to jump over
            // if the piece next to p1 is dummy piece, the team colour is an empty string
            if(new_col > curr_col) {
               if(!board[curr_row][curr_col + 1].get_team_colour().empty()) {
                  cout <<"invalid movement!"<<endl;
                  return false;}
            } else{ // new_col < curr_col
               if(!board[curr_row][curr_col - 1].get_team_colour().empty()) {
                  cout <<"invalid movement!"<<endl;
                  return false;}
            }

         } else { // when difference between new row and new col == 2, means it moves up or down first (row), then move diagonally
            if(new_row > curr_row) {
               if(!board[curr_row + 1][curr_col].get_team_colour().empty()) {
                  cout <<"invalid movement!"<<endl;
                  return false;}
            } else { // new_row < curr_row
               if(!board[curr_row -1][curr_col].get_team_colour().empty()) {
                  cout <<"invalid movement!"<<endl;
                  return false;}
            }
         }
      }

      // condition for elephants: it cannot jump over other piece
      if(p1.get_name() == ELEPHANT_RED || p1.get_name() == ELEPHANT_BLUE) {
         if(abs_row == 2) { // means it moves left or right first (col)
            // check if it is trying to jump over
            if(new_col > curr_col) {
               if(!board[curr_row][curr_col + 1].get_team_colour().empty()) {
                  cout <<"invalid movement!"<<endl;
                  return false;}
               if(new_row > curr_row) {
                  if(!board[curr_row + 1][curr_col + 2].get_team_colour().empty()) {
                     cout <<"invalid movement!"<<endl;
                     return false;}
               } else { // new_row < curr_row
                  if(!board[curr_row - 1][curr_col + 2].get_team_colour().empty()) {
                     cout <<"invalid movement!"<<endl;
                     return false;}
               }
            } else{ // new_col < curr_col
               if(!board[curr_row][curr_col - 1].get_team_colour().empty()) {
                  cout <<"invalid movement!"<<endl;
                  return false;}
               if(new_row > curr_row) {
                  if(!board[curr_row + 1][curr_col - 2].get_team_colour().empty()) {
                     cout <<"invalid movement!"<<endl;
                     return false;}
               } else { // new_row < curr_row
                  if(!board[curr_row - 1][curr_col - 2].get_team_colour().empty()) {
                     cout <<"invalid movement!"<<endl;
                     return false;}
               }
            }
         } else { // when abs_row == 3, means it moves up or down first (row)
            // check if it is trying to jump over
            if(new_row > curr_row) {
               if(!board[curr_row + 1][curr_col].get_team_colour().empty()) {
                  cout <<"invalid movement!"<<endl;
                  return false;}
               if(new_col > curr_col) {
                  if(!board[curr_row + 2][curr_col + 1].get_team_colour().empty()) {
                     cout <<"invalid movement!"<<endl;
                     return false;}
               } else { // new_col < curr_col
                  if(!board[curr_row + 2][curr_col - 1].get_team_colour().empty()) {
                     cout <<"invalid movement!"<<endl;
                     return false;}
               }
            } else{ // new_row < curr_row
               if(!board[curr_row -1][curr_col].get_team_colour().empty()) {
                  cout <<"invalid movement!"<<endl;
                  return false;}
               if(new_col > curr_col) {
                  if(!board[curr_row - 2][curr_col + 1].get_team_colour().empty()) {
                     cout <<"invalid movement!"<<endl;
                     return false;}
               } else { // new_col < curr_col
                  if(!board[curr_row - 2][curr_col - 1].get_team_colour().empty()) {
                     cout <<"invalid movement!"<<endl;
                     return false;}
               }
            }
         } 
      }
      // condition for chariots: it cannot jump over other pieces
      if(p1.get_name() == CHARIOT_RED || p1.get_name() == CHARIOT_BLUE) {
         int i_start;
         int i_end;

         if(abs_row != 0){ // when moving up or down 
            if(new_row > curr_row){
               i_start = curr_row;
               i_end = new_row;
            } else {
               i_start = new_row;
               i_end = curr_row;
            }
         } else { // when moving right or left
            if(new_col > curr_col) {
               i_start = curr_col;
               i_end = new_col;
            } else {
               i_start = new_col;
               i_end = curr_col;
            }
         }

         for(int i = i_start + 1; i < i_end; i++) {
            Janggi_Piece other_p;
            if(abs_row != 0){ // when moving up or down
               other_p = board[i][curr_col];
            } else { // when moving right of left
               other_p = board[curr_row][i];
            }
            // if it tries to jump over other piece, it is not a valid move.
            if(!other_p.get_team_colour().empty()) {
               cout <<"invalid movement!"<<endl;
               return false;}
         }
      }

      // condition for cannons: it must jump over one other piece
      // and cannon cannot jump over or attack other cannons
      if(p1.get_name() == CANNON_RED || p1.get_name() == CANNON_BLUE) {
         // first, check if desitnation is another cannon
         if(board[new_row][new_col].get_name() == CANNON_RED ||
            board[new_row][new_col].get_name() == CANNON_BLUE) {
            cout <<"invalid movement!"<<endl;
            return false;}

         int i_start;
         int i_end;

         if(abs_row != 0){ // when moving up or down 
            if(new_row > curr_row){
               i_start = curr_row;
               i_end = new_row;
            } else {
               i_start = new_row;
               i_end = curr_row;
            }
         } else { // when moving right or left
            if(new_col > curr_col) {
               i_start = curr_col;
               i_end = new_col;
            } else {
               i_start = new_col;
               i_end = curr_col;
            }
         }

         // check if cannon is jumping over exactly one piece, and the piece is not a cannon
         int count_piece = 0;
         for(int i = i_start + 1; i < i_end; i++) {
            Janggi_Piece p_jump;
            if(abs_row != 0){ // when moving up or down
               p_jump = board[i][curr_col];
            } else { // when moving right of left
               p_jump = board[curr_row][i];
            }
            if(!p_jump.get_team_colour().empty()) { // check if it is not a dummpy piece
               // if it is jumping over cannon, it is not a valid move
               if(p_jump.get_name() == CANNON_RED || p_jump.get_name() == CANNON_BLUE) {return false;}
               count_piece++;
               // if it is trying to jump more than one piece, it is not a valid move
               if(count_piece > 1) {
                  cout <<"invalid movement!"<<endl;
                  return false;}
            }
         }
         // only valid move is if it jumps over exactly one piece
         if(count_piece != 1) {
            cout <<"invalid movement!"<<endl;
            return false;}
      }
      
      tuple<int,int> new_pos(new_row,new_col);
      p1.renew_pos(new_pos);

      // for a current position, put a dummy piece
      Janggi_Piece dummy = Janggi_Piece();
      board[curr_row][curr_col] = dummy;
      // put p1 on a new position
      board[new_row][new_col] = p1;

      return true;
   } else {
      cout <<"invalid movement!"<<endl;
      return false;
   }

   return false;
}
