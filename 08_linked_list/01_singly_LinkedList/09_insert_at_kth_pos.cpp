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
        ListNode* insertAtKthPosition(ListNode* &head, int X, int k) {
            //your code goes here
            if(k == 1){
                return new ListNode(X, head);
            }
            ListNode* temp = head;
            int cnt = 0;
            while(temp != NULL){
                cnt++;
                if(cnt == k-1){
                    ListNode* node = new ListNode(X, temp->next);
                    temp->next = node;
                    break;
                }
                temp = temp->next;
            }
            return head;
        }
};