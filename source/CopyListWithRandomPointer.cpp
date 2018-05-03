//
// Created by GDongLin on 2018/5/3.
//

#include <map>
#include <vector>
#include <iostream>

using namespace std;

struct RandomListNode {
    int label;
    RandomListNode *next, *random;

    RandomListNode(int x) : label(x), next(nullptr), random(nullptr) {}
};

class Solution {
public:
    RandomListNode *copyRandomList(RandomListNode *head) {
        if (!head) {
            return head;
        }
        map<RandomListNode *, int> origin_nodes_map;
        vector<RandomListNode *> copy_nodes_vector;
        int i{0};
        RandomListNode *origin = head;
        while (origin) {
            copy_nodes_vector.push_back(new RandomListNode(origin->label));
            origin_nodes_map[origin] = i;
            origin = origin->next;
            i++;
        }
        i = 0;
        origin = head;
        while (origin) {
            RandomListNode *copy_node = copy_nodes_vector[i];
            if (i != copy_nodes_vector.size()) {
                copy_node->next = copy_nodes_vector[i + 1];
            }
            if (origin->random) {
                copy_node->random = copy_nodes_vector[origin_nodes_map[origin->random]];
            }
            origin = origin->next;
            i++;
        }
        return copy_nodes_vector[0];

    }
};

//int main() {
//    RandomListNode a{1};
//    RandomListNode b{4};
//    RandomListNode c{3};
//    RandomListNode d{2};
//    RandomListNode e{5};
//    RandomListNode f{2};
//    a.next = &b;
//    a.random = &e;
//    b.next = &c;
//    b.random = &d;
//    c.next = &d;
//    d.next = &e;
//    e.next = &f;
//    Solution s;
//    RandomListNode *head = s.copyRandomList(&a);
//    while (head){
//        cout << head->label;
//        if(head->random){
//            cout << "  >  " << head->random->label;
//        }
//        cout << endl;
//        head = head->next;
//    }
//}
