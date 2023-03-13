#include "RemoveDuplicatesfromSortedArray.cc"
#include "BestTimeToBuyAndSellStockII.cc"
#include "iostream"

int main() {
  Solution *solution = new Solution();
  std::vector<int> prices = {7, 1, 5, 3, 6, 4};
  std::cout << solution->maxProfit(prices) << std::endl;
  return 0;
}

//      profit = *max_element(prices.begin(), prices.end());
//      profit2 = *min_element(prices.begin(), prices.end());