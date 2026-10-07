/*
Definition of singly linked list:
class ListNode{
  public:
    int data;
    ListNode *next;
    ListNode() : data(0), next(nullptr) {}
    ListNode(int x) : data(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : data(x), next(next) {}
};
*/

class Solution {
    public:
        ListNode* insertBeforeX(ListNode* &head, int X, int val) {
            //your code goes here
            if(head == NULL) return head;
            if(head->data == X){
                return new ListNode(val, head);
            }
            ListNode* temp = head;
            ListNode* prev = NULL;
            while(temp != NULL){
                if(temp->data == X){
                    ListNode* node = new ListNode(val, prev->next);
                    prev->next = node;
                    break;
                }
                prev = temp;
                temp = temp->next;
            }
            return head;
        }
};