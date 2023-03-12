#include "RemoveDuplicatesfromSortedArray.cc"

int main() {
  std::vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
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