#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n=36;
    vector<int> ls;
    for(int i=1; i*i<=n; i++){
        if(n%i == 0) ls.emplace_back(i);
        if((n/i) != i){
            ls.emplace_back(n/i);
        }
    }
    sort(ls.begin(),ls.end());
    for(auto it: ls){
        cout<<it<<" ";
    }
    return 0;
}


// time complexity : O(sqrt(n) KlogK)
//                     loop     sort <-  k-factors of n       