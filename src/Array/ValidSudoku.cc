#include "vector"

class Solution {
 public:
  bool isValidSudoku(std::vector<std::vector<char>> &board) {
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

    return status;
  }
};