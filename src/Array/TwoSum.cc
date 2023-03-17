#include "vector"
#include "map"

class Solution {
 public:
  std::vector<int> twoSum(std::vector<int> &nums, int target) {
    std::map<int, int> map;
    std::vector<int> result;
    for (int i = 0; i < nums.size(); i++) {
      int number = target - nums[i];
      if (map.find(number) != map.end()) {
        result.push_back(map[number]);
        result.push_back(i);
        return result;
      }
      map[nums[i]] = i;
    }
    return result;
  }
};