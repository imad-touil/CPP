
// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
	public:
		ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
			ListNode    *total;
			while (l1->next)
			{
				total->val = l1->val + l2->val;
				l1->next++;
				l2->next++;
				total->next++;
			}
			return (total);
		}
};
