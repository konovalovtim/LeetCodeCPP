#include <iostream>
#include <unordered_map>
#include "vector"
#include "string"
#include "set"
#include "map"
#include <algorithm>

using namespace std;
int main() {
    std::string s = {"A man, a plan, a canal: Panama"};
    std::transform(s.begin(), s.end(), s.begin(), ::tolower);
    s.erase(std::remove_if(s.begin(), s.end(), [](char c) {
      return !std::isalnum(c);
    }), s.end());
    std::string rev = s;
    std::reverse(rev.begin(), rev.end());
    return s == rev;


//  std::cout << res;

  return 0;
}