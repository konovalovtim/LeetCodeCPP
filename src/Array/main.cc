#include "ContainsDuplicate.cc"
#include "iostream"

int main() {
  Solution *solution = new Solution();
  std::vector<int> prices = {2, 2, 18, 22, 22};
  std::cout << solution->containsDuplicate(prices) << std::endl;
  return 0;
}

//      profit = *max_element(prices.begin(), prices.end());
//      profit2 = *min_element(prices.begin(), prices.end());