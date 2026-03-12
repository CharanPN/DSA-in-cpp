#include<bits/stdc++.h>
using namespace std;

void backtrack(int n){
    if(n < 1)
        return;
    backtrack(n-1);
    cout<<n<<endl;
}

int main(){
    int n;
    cout<<"n ? ";
    cin>>n;
    backtrack(n);
    return 0;
}