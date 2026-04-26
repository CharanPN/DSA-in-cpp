#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int n=arr.size();
        int largest=arr[0];
        for(int i=0; i<n; i++){
            if(arr[i] > largest)
                largest = arr[i];
        }
        return largest;
    }
};


int main(){
    vector<int> arr={2,1,4,5,4,7};
    Solution ob;
    cout<<ob.largest(arr); 
}