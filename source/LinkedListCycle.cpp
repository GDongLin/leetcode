//
// Created by GDongLin on 2018/5/2.
//

struct ListNode {
    int val;
    ListNode *next;

    explicit ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *slow{head}, *fast{head};
        while (fast) {
            slow = slow->next;
            fast = fast->next;
            if (!fast) {
                return false;
            }
            fast = fast->next;
            if (fast == slow) {
                return true;
            };
        }
        return false;
    }
};