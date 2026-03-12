#include<vector>
#include<iostream>
using namespace std;
int main(){
    vector<int> arr(2,100);
    for(auto it: arr){
        cout<<it<<" ";
    }
    arr.insert(arr.begin(),50);
    cout<<endl;
    for(auto it: arr){
        cout<<it<<" ";
    }
    cout<<endl;
    arr.insert(arr.begin()+1,75);
    for(auto it: arr){
        cout<<it<<" ";
    }
    cout<<endl;
    arr.insert(arr.end(),2,1000);
    for(auto it: arr){
        cout<<it<<" ";
    }

    vector<int> arr2={1,2,3,4};
    cout<<endl;
    for(auto it: arr2){
        cout<<it<<" ";
    }
    arr2.insert(arr2.end(),arr.begin(),arr.end());
    cout<<endl;
    for(auto it: arr2){
        cout<<it<<" ";
    }
    arr2.pop_back();
    cout<<"\npop"<<endl;
    for(auto it: arr2){
        cout<<it<<" ";
    }
    arr.swap(arr2);
    cout<<"\nSwap\n";
    for(auto it: arr){
        cout<<it<<" ";
    }
    cout<<"\narr2 :\n";
    for(auto it: arr2){
        cout<<it<<" ";
    }
    arr2.clear();
    cout<<endl<<"clear: ";
    for(auto it: arr2){
        cout<<it<<" ";
    }
    cout<<arr2.empty();
    return 0;
}