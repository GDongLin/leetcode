#include <iostream>
#include <vector>
#include "../ListNode.h"

// https://leetcode.com/problems/add-two-numbers/description/

using namespace std;

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int temp = 0;
        ListNode preHead(0), *p = &preHead;
        while(l1 || l2 || temp){
            int sum = (l1? l1->getVal():0) + (l2? l2->getVal():0) + temp;
            temp = sum / 10;
            p->setNext(new ListNode(sum % 10));
            p = p->getNext();
            l1 = l1? l1->getNext(): NULL;
            l2 = l2? l2->getNext(): NULL;
        }
        return preHead.getNext();
    }
};

//int main() {
//    ListNode l1(0), *p1 = &l1;
//    ListNode l2(0), *p2 = &l2;
//    vector<int> v1{1,5,9,5}, v2{4,9,7};
//    for(const int &v: v1) {
//        p1->setNext(new ListNode(v));
//        p1 = p1->getNext();
//    }
//    for(const int &v: v2){
//        p2->setNext(new ListNode(v));
//        p2 = p2->getNext();
//    }
//    ListNode *res = Solution().addTwoNumbers(l1.getNext(), l2.getNext());
//    while(res){
//        cout << res->getVal();
//        res = res->getNext();
//    }
//}