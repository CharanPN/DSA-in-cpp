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
    ListNode* insertBeforeKthPosition(ListNode* head, int X, int K) {
        // Your code goes here
        if(head->next == NULL || K == 1){
            ListNode* newNode = new ListNode(X, NULL, head);
            head->prev = newNode;
            return newNode;
        }
        ListNode* temp = head;
        int cnt = 0;
        while(temp->next){
            cnt++;
            if(cnt == K) break;
            temp = temp->next;
        }
        ListNode* prev = temp->prev;
        ListNode* newNode = new ListNode(X, prev, temp);
        prev->next = newNode;
        temp->prev = newNode;
        return head;
    }
};