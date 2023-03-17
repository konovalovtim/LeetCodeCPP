#include <iostream>
#include "vector"

using namespace std;
int main() {
  std::vector<vector<char>> board{
    {'8','3','.','.','7','.','.','.','.'},
    {'6','.','.','1','9','5','.','.','.'},
    {'.','9','.','.','.','.','.','6','.'},
    {'.','.','6','.','6','.','.','.','3'},
    {'4','.','.','8','.','3','.','.','1'},
    {'7','.','.','.','2','.','.','.','6'},
    {'.','6','.','.','.','.','2','8','.'},
    {'.','.','.','4','1','9','.','.','5'},
    {'.','.','.','.','8','.','.','7','9'}};


  int i, j;
  bool status = true;

  for (int column = 0; column < 9; column++) {
    for (int row = 0; row < 9; row++) {
      if (column != j && board[i][column] == board[i][j])
        status = false;
      if (row != i && board[row][j] == board[i][j])
        status = false;
    }
  }

//  for (int row = i % 3; row < i % 3 * 3; row++)
//    for (int col = j % 3; row < j % 3 * 3; col++)
//      if (row != i && col != j && board[row] [col] == board[i] [j])
//        status = false;

//  for (int j : board) {
    std::cout << status;
//  }
  return 0;
}