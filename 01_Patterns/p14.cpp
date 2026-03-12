// Pattern-14: Increasing Letter Triangle Pattern

#include<iostream>
using namespace std;
int main(){
    for(int i=0; i<5; i++){
        for(char c='A'; c<='A'+i; c++){
            cout<<c<<" ";
        }
        cout<<endl;
    }
    return 0;
}