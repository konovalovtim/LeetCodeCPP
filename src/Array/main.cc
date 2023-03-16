#include <iostream>
#include "../Strings/ReverseInteger.cc"
#include "vector"

using namespace std;

int main() {
  std::vector<int> digits({9, 9});

  for (int j : digits) {
    std::cout << j << " ";
  }
  return 0;
}