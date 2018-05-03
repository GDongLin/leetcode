//
// Created by GDongLin on 2018/5/2.
//

struct ListNode {
    int val;
    ListNode *next;
    explicit ListNode(int x) : val(x), next(nullptr) {}
};

int getLength(const ListNode *head){
    if(!head){
        return 0;
    }
    int len{0};
    while(head){
        len++;
        head = head->next;
    }
    return len;
}

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int len_a = getLength(headA);
        int len_b = getLength(headB);
        int interval{0};
        if(len_a > len_b){
            interval = len_a -len_b;
            while(interval--){
                headA = headA->next;
            }
        } else{
            interval = len_b -len_a;
            while(interval--){
                headB = headB->next;
            }
        }
        while (headA){
            if(headA==headB){
                return headA;
            } else{
                headA = headA->next;
                headB = headB->next;
            }
        }
        return nullptr;
    }
};