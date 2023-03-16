#include <iostream>
#include "../Strings/ReverseInteger.cc"
#include "vector"

using namespace std;

int main() {
  std::vector<int> nums({9, 9});
  int j = 0;
  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] != 0) {
      if(i != j) {
        int temp = nums[j];
        nums[j] = nums[i];
        nums[i] = temp;
      }
      j++;
    }
  }

  for (int j : nums) {
    std::cout << j << " ";
  }
  return 0;
}