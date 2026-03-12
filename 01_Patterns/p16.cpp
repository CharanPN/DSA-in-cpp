// Pattern - 16: Alpha-Ramp Pattern

#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<char('A'+i);
        }
        cout<<endl;
    }
    return 0;
}