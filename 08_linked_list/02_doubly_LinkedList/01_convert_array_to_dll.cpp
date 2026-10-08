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

class Solution
{
public:
    ListNode *arrayToDoublyLinkedList(vector<int> &arr) {
        // Your code goes here
        int n = arr.size();
        if(n == 0) return NULL;
        ListNode* head = new ListNode(arr[0]);
        if(n == 1) return head;
        ListNode* prev = head;
        for(int i=1; i < n; i++){
            ListNode* temp = new ListNode(arr[i], prev, nullptr);
            prev->next = temp;
            prev = temp;
        }
        return head;
    }
};