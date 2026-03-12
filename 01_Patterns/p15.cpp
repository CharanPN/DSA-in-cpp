// Pattern-15: Reverse Letter Triangle Pattern

#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=0; i<n; i++){
        for(char c='A'; c<='A'+ n-1 - i; c++){
            cout<<c<<" ";
        }
        cout<<endl;
    }
    return 0;
}