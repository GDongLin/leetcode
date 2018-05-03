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
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow{head}, *fast{head};
        while (fast) {
            slow = slow->next;
            fast = fast->next;
            if (!fast) {
                return nullptr;
            }
            fast = fast->next;
            if (fast == slow) {
                ListNode *meet = fast;
                while (meet!=head){
                    meet = meet->next;
                    head = head->next;
                }
                return meet;
            };
        }
        return nullptr;

    }
};