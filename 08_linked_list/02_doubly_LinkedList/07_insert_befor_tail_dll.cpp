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
    ListNode* insertBeforeTail(ListNode* head, int X) {
        // Your code goes here
        if(head == NULL) return NULL;
        if(head->next == NULL){
            ListNode* newNode = new ListNode(X, nullptr, head);
            head->prev = newNode;
            return newNode;
        }
        ListNode* temp = head;
        while(temp->next){
            temp = temp->next;
        }
        ListNode* prev = temp->prev;
        ListNode* newNode = new ListNode(X, prev, temp);
        prev->next = newNode;
        temp->prev = newNode;
        return head;
    }
};
