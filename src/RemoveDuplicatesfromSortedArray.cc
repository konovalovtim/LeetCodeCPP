#include "vector"
#include "iostream"

namespace std {
class Solution {
 public:
  int removeDuplicates(vector<int> &nums) {
    int k = 1;
    int prev = nums[0];
    for (size_t i = 1; i < nums.size(); i++) {
      if (nums[i] != prev) {
        nums[k] = nums[i];
        k++;
      }
      prev = nums[i];
    }
    return k;
  }
};
}