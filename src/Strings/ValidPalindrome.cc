#include "string"

class Solution {
 public:
  bool isPalindrome(std::string s) {
      std::transform(s.begin(), s.end(), s.begin(), ::tolower);
      s.erase(std::remove_if(s.begin(), s.end(), [](char c) {
        return !std::isalnum(c);
      }), s.end());
      std::string rev = s;
      std::reverse(rev.begin(), rev.end());
      return s == rev;
  }
};