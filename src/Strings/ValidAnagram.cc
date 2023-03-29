#include <string>

class Solution {
 public:
  bool isAnagram(std::string s, std::string t) {
    if (s.length() == t.length()) {
      std::sort(s.begin(), s.end());
      std::sort(t.begin(), t.end());
      for (int i = 0; i < s.length(); ++i) {
        if (s[i] != t[i]) return false;
      }
      return true;
    } else return false;
  }
};