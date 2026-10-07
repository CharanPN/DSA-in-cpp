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
        ListNode* deleteKthNode(ListNode* &head, int k) {
            // Your code goes here
            if(head == NULL) return head;
            if(k == 1){
                ListNode* temp = head;
                head = head->next;
                delete temp;
                return head;
            }
            int cnt = 0;
            ListNode* temp = head;
            ListNode* prev = NULL;
            while(temp){
                cnt++;
                if(cnt == k){
                    prev->next = prev->next->next;
                    delete temp;
                    return head;           
                }
                prev = temp;
                temp = temp->next;
            }
            return head;
        }
};
