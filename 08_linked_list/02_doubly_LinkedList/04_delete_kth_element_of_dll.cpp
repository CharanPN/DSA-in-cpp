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
    ListNode* deleteHead(ListNode *&head){
        ListNode* temp = head;
        head = head->next;
        head->prev = NULL;
        delete temp;
        return head;
    }

    ListNode* deleteTail(ListNode *&head){
        ListNode* temp = head;
        while(temp->next){
            temp = temp->next;
        }
        ListNode* back = temp->prev;
        back->next = NULL;
        delete temp;
        return head;
    }

    ListNode *deleteKthElement(ListNode *&head, int k) {
        // Your code goes here
        if(head == NULL) return NULL;
        int cnt = 0;
        ListNode* temp = head;
        while(temp){
            cnt++;
            if(cnt == k){
                break;
            }
            temp = temp->next;
        }
        ListNode* back = temp->prev;
        ListNode* front = temp->next;
        if(back == NULL && front == NULL) return NULL;
        else if(back == NULL){
            head = deleteHead(head);
            return head;
        }
        else if(front == NULL){
            head = deleteTail(head);
            return head;
        }
        else{
            back->next = front;
            front->prev = back;
            delete temp;
            return head;
        }
    }
};