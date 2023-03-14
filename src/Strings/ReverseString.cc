#include "vector"

class Solution {
 public:
  void reverseString(std::vector<char> &s) {
    int n = s.size() - 1;
    for (int i = 0; i <= n; i++) {
      std::swap(s[i], s[n]);
      n = n - 1;
    }
  }
};