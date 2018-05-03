//
// Created by GDongLin on 03/01/2018.
//

#ifndef LEETCODE_LISTNODE_H
#define LEETCODE_LISTNODE_H


class ListNode {

public:
    explicit ListNode(int val):val(val), next(nullptr){};
    const int getVal();
    ListNode *getNext();
    void setVal(const int &);
    void setNext(ListNode *);

private:
    int val;
    ListNode *next;

};


#endif //LEETCODE_LISTNODE_H
