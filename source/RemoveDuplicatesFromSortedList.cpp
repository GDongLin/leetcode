//
// Created by GDongLin on 19/04/2018.


#include <iostream>

using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;

    explicit ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode *deleteDuplicates(ListNode *head) {
//        if(!head){
//            return head;
//        }
//        ListNode *pre = head;
//        ListNode *temp = pre->next;
//        while (temp) {
//            if (pre->val != temp->val) {
//                pre->next = temp;
//                pre = pre->next;
//            }
//            temp = temp->next;
//            if(!temp){
//                pre->next = temp;
//            }
//        }
        ListNode *temp = head;
        while(temp && temp->next){
            if(temp->val == temp->next->val){
                temp->next = temp->next->next;
            }else{
                temp = temp->next;
            }
        }
        return head;
    }
};