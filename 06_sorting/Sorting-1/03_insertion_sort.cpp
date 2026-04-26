#include<iostream>
using namespace std;
int main(){
    int arr[]={2,1,3,5,7,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}