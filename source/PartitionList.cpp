//
// Created by GDongLin on 2018/5/2.
//

#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    explicit ListNode(int x) : val(x), next(nullptr) {}
};


class Solution {
public:
    ListNode *partition(ListNode *head, int x) {
        // 注意两个head必须为不同对象
        ListNode pHead{-1};
        ListNode qHead{-1};
        ListNode *p{&pHead}, *q{&qHead};
        while (head) {
            if (head->val < x) {
                p->next = head;
                p = p->next;
            } else {
                q->next = head;
                q = q->next;
            }
            head = head->next;
        }
        q->next = nullptr;
        p->next = qHead.next;
        return pHead.next;

    }
};

//int main(){
//    // [1,4,3,2,5,2]
//    ListNode a{1};
//    ListNode b{4};
//    ListNode c{3};
//    ListNode d{2};
//    ListNode e{5};
//    ListNode f{2};
//    a.next = &b;
//    b.next = &c;
//    c.next = &d;
//    d.next = &e;
//    e.next = &f;
//    Solution s;
//    ListNode *head = s.partition(&a, 3);
//    while (head){
//        cout << head->val << " ";
//        head = head->next;
//    }
//
//}