#include<iostream>
#include<map>
using namespace std;
int main(){
    string s="charan";
    map<char,int> mpp;
    for(int i=0; i<s.length(); i++){
        mpp[s[i]]++;
    }
    for(auto it: mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    return 0;
}