#include<vector>
#include<iostream>
using namespace std;
int main(){
    vector<int> v;
    v.emplace_back(1);
    v.emplace_back(2);
    v.emplace_back(3);
    v.emplace_back(4);

    for(auto it:v){
        cout<<it<<" ";
    }

    v.erase(v.begin()+1, v.end());

    cout<<"After erase:";
    for(auto it:v){
        cout<<it<<" ";
    }
    return 0;
}