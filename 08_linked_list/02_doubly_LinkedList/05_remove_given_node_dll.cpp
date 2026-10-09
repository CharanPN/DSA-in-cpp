/**
class ListNode
{
 * Definition for doubly-linked list.
 *  public:
 *      int data;
 *      ListNode *prev;
 *      ListNode *next;
 *      ListNode() : data(0), prev(nullptr), next(nullptr) {}
 *      ListNode(int x) : data(x), prev(nullptr), next(nullptr) {}
 *      ListNode(int x, ListNode *prev, ListNode *next) : data(x), prev(prev), next(next) {}
};
*/

class Solution {
public:
    void deleteGivenNode(ListNode *node) {
        // Your code goes here
        ListNode* prev = node->prev;
        ListNode* next = node->next;

        if(next == NULL){
            prev->next = NULL;
            delete node;
            return;
        }

        prev->next = next;
        next->prev = prev;
        delete node;
        return;
    }
};