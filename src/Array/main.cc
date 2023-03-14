#include <iostream>
#include "string"
#include "../Strings/ReverseInteger.cc"

using namespace std;

int main()
{
  int x = 1534236469;
  int res = 0;
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
    if (str[i] != '0') {
      flag = 1;
    }
    if (flag == 1) {
      buff += str[i];
    }
  }
  std::cout << buff << "    ";
  res = std::stoi(buff);
   if (res > INT_MAX || res < INT_MIN) {
     return 0;
   } else {
     return res;
   }
}