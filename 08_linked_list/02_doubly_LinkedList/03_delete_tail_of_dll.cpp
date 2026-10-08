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
    ListNode *deleteTail(ListNode *&head) {
        // Your code goes here
        if(head == NULL || head->next == NULL) return NULL;
        ListNode* temp = head;
        while(temp->next->next){
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
        return head;
    }
};