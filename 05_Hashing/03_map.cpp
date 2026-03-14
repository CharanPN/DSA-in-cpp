// hash-map

#include<iostream>
#include<map>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int arr[n];
    map<int,int> mpp;
    cout<<"Enter arr : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
        mpp[arr[i]]++;
    }
    for(auto it: mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    return 0;
}