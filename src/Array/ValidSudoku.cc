#include "vector"

class Solution {
 public:
  bool isValidSudoku(std::vector<std::vector<char>> &board) {
    bool status = true;
    int row[9][9] = {0}, col[9][9] = {0}, sub_33[9][9] = {0};
    for (int i = 0; i < board.size(); i++) {
      for (int j = 0; j < board[i].size(); j++) {
        if (board[i][j] != '.') {
          int num = board[i][j] - '0' - 1;
          if (row[i][num] || col[j][num]) status = false;
          row[i][num] = col[j][num] = 1;
        }
      }
    }

    return status;
  }
};