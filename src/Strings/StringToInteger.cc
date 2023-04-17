#include <string>
#include <climits>

class Solution {
 public:
  int myAtoi(std::string s) {
      int i = 0, sign = 1, result = 0;
      while (s[i] == ' ') {
          i++;
      }
      if (s[i] == '+' || s[i] == '-') {
          sign = (s[i] == '-') ? -1 : 1;
          i++;
      }
      while (isdigit(s[i])) {
          int digit = s[i] - '0';
          result = result * 10 + digit;
          i++;
      }
      return sign * result;
  }
};