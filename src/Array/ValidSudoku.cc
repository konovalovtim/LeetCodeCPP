#include "vector"
#include "set"

class Solution {
 public:
  bool isValidSudoku(std::vector<std::vector<char>> &board) {
    // Check rows
    for (int i = 0; i < 9; i++) {
      std::set<char> row_set;
      for (int j = 0; j < 9; j++) {
        char ch = board[i][j];
        if (ch != '.') {
          if (row_set.count(ch) > 0) {
            return false;
          }
          row_set.insert(ch);
        }
      }
    }

    // Check columns
    for (int j = 0; j < 9; j++) {
      std::set<char> col_set;
      for (int i = 0; i < 9; i++) {
        char ch = board[i][j];
        if (ch != '.') {
          if (col_set.count(ch) > 0) {
            return false;
          }
          col_set.insert(ch);
        }
      }
    }

    // Check sub-boxes
    for (int k = 0; k < 9; k++) {
      std::set<char> box_set;
      int i_offset = (k / 3) * 3;
      int j_offset = (k % 3) * 3;
      for (int i = i_offset; i < i_offset + 3; i++) {
        for (int j = j_offset; j < j_offset + 3; j++) {
          char ch = board[i][j];
          if (ch != '.') {
            if (box_set.count(ch) > 0) {
              return false;
            }
            box_set.insert(ch);
          }
        }
      }
    }

    return true;
  }
};