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
        ListNode* deleteNodeWithValueX(ListNode* &head, int X) {
            //your code goes here
            if(head == NULL) return head;
            if(head->data == X){
                ListNode* temp = head;
                head = head->next;
                delete temp;
                return head;
            }
            ListNode* temp = head->next;
            ListNode* prev = head;
            while(temp){
                if(temp->data == X){
                    prev->next = temp->next;
                    delete temp;
                    return head;
                }
                prev = temp;
                temp = temp->next;
            }
            return head;
        }
};