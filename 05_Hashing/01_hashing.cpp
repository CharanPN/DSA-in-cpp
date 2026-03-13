#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements :";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int hash[10]={0};
    for(int i=0; i<n; i++){
        hash[arr[i]] +=1;
    }
    int q=5;
    while(q--){
        int temp;
        cout<<"query : ";
        cin>>temp;
        cout<<endl<<hash[temp]<<" times.";
    }
    return 0;
}