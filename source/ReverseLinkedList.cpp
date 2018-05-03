//
// Created by GDongLin on 2018/5/1.
//

struct ListNode {
    int val;
    ListNode *next;

    explicit ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *p{nullptr},*temp{nullptr}, *q{head};
        while (q){
            temp = q->next;
            q->next = p;
            p = q;
            q = temp;
        }
        return p;
    }
};