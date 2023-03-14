#include "string"

class Solution {
 public:
  int reverse(int x) {
    long int res = 0;
    std::string str = std::to_string(x);
    std::string buff{};
    int flag = 0;
    size_t i = 0;
    size_t j = 0;
    if (x < 0) {
      buff += '-';
      j = 1;
    }
    for (i = str.length() - 1; i != j - 1; i--) {
      if (str[i] != '0') flag = 1;
      if (flag == 1) buff += str[i];
    }
    int s = 0;
    res = std::atol(buff.c_str());
    if (res > INT_MAX || res < INT_MIN) {
      res = 0;
      s = static_cast <int>(res);
    } else s = static_cast <int>(res);
    return s;
  }
};