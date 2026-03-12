#include<bits/stdc++.h>
using namespace std;

// void reverse(int l, int r){

// }

// int main1(){
//     int arr[] = {1,2,3,4,5,6};
//     int l=0, r= sizeof(arr)/sizeof(arr[0])-1,temp;
//     while(l<r){
//         temp = arr[l];
//         arr[l] = arr[r];
//         arr[r] = temp;
//         l++;
//         r--;
//     }
//     for(int x: arr){
//         cout<<x<<" ";
//     }
//     return 0;
// }

// int main2(){
//     int arr[] = {1,2,3,7,8,11};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     for(int i=0; i<n/2; i++){
//         int temp = arr[i];
//         arr[i] = arr[n-i-1];
//         arr[n-i-1] = temp;
//     }
//     for(int x: arr){
//         cout<<x<<" ";
//     }
//     return 0;
// }

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    int temp;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n/2; i++){
        swap(arr[i], arr[n-i-1]);
    }
    cout<<"\nAfter reverse : ";
    for(int x: arr){
        cout<<x<<" ";
    }
    return 0;
}