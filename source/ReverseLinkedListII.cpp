//
// Created by GDongLin on 2018/5/1.
// https://www.bilibili.com/video/av17952743?from=search&seid=3611843713956016854
// 例1-b
//

struct ListNode {
    int val;
    ListNode *next;

    explicit ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode *reverseBetween(ListNode *head, int m, int n) {
//        int i{1};
//        ListNode *p{head};
//        while (i<m){
//            p = p->next;
//            i++;
//        }
//        ListNode *p2 = p->next;
//        ListNode *p1 = p->next, *p3 = p;
//        while (i <= n){
//            ListNode *temp = p1->next;
//            p1->next = p;
//            p = p1;
//            p1 = temp;
//            i++;
//        }
//        p2->next = p1;
//        p3->next = p;
//        return head;

        int chang_len = n - m + 1;
        ListNode *pre_head{nullptr}, *result{head};
        while (head && --m) {
            pre_head = head;
            head = head->next;
        }

        ListNode *modify_list_tail{head}, *q{nullptr};

        while (head && chang_len--) {
            ListNode *temp = head->next;
            head->next = q;
            q = head;
            head = temp;
        }

        modify_list_tail->next = head;
        if (pre_head) {
            pre_head->next = q;
        } else {
            result = q;
        }
        return result;
    }
};