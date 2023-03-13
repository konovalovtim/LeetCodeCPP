#include "vector"

class Solution {
 public:
  int maxProfit(std::vector<int> &prices) {
    int profit = 0;
    int min = 0;
    for (int i = 1; i < prices.size(); i++) {
      if (prices[i - 1] > prices[i]) {
        min = i;
      }
      if (prices[i - 1] <= prices[i] && (i + 1 == prices.size() || prices[i] > prices[i + 1])) {
        profit += (prices[i] - prices[min]);
      }
    }
    return profit;
  }
};