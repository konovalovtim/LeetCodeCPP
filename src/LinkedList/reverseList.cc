#include "list"

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
 public:
  ListNode *reverseList(ListNode *head) {
      if (!head) return head;
      ListNode *current = head;
      ListNode *reverse = NULL;
      while (head) {
          current = head->next;
          head->next = reverse;
          reverse = head;
          head = current;
      }
      return reverse;
  }
};