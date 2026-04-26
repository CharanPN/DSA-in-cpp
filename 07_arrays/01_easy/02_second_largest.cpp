#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int largest=arr[0];
        int sec_largest= INT_MIN;
        int n=arr.size();
        for(int i=1; i<n; i++){
            if(arr[i] > largest){
                sec_largest = largest;
                largest = arr[i];
            }
            if(arr[i] > sec_largest && arr[i] != largest)
                sec_largest = arr[i];
        }
        return sec_largest;
    }
};

int main(){
    vector<int> arr={1,2,3,4,6,5};
    Solution ob1;
    cout<<ob1.getSecondLargest(arr);
    return 0;
}