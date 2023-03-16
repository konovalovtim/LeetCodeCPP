#include "vector"

class Solution {
 public:
  void moveZeroes(std::vector<int> &nums) {
    int j = 0;
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] != 0) {
        if (i != j) {
          int temp = nums[j];
          nums[j] = nums[i];
          nums[i] = temp;
        }
        j++;
      }
    }
  }
};