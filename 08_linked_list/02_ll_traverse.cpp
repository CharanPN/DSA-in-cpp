#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int data){
            this->data = data;
            next = nullptr;
        }

};

Node* convert2ll(vector<int>& nums){
    Node* head = new Node(nums[0]);
    Node* cur = head;
    for(int i=1; i<nums.size(); i++){
        Node* temp = new Node(nums[i]);
        cur->next = temp;
        cur = temp;
    }
    return head;
}

int main(){
    vector<int> arr = {1, 2, 3, 4};
    Node* head= convert2ll(arr);
    Node* cur = head;
    while(cur){
        cout<<cur->data<<" ";
        cur = cur->next;
    }
    return 0;
}