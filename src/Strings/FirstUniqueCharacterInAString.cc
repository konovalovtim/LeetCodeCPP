#include <string>

class Solution {
 public:
  int firstUniqChar(std::string s) {
    int res = -1;
    for (int i = 0; i < s.length(); i++) {
      for (size_t j = 1; j < s.length(); j++) {
        if (s[i] == s[j]) {
          break;
        } else if (j == s.length() - 1) {
            res = i;
          break;
        }
      }
      if (res == i) {
        break;
      }
    }
    return res;
  }
};