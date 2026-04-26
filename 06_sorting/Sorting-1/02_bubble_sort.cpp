#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        int didsort=0;
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                didsort=1;
            }
                
        }
        if(didsort==0) 
            break;
        cout<<"runs\n";
    }
    cout<<"After sorting :";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}