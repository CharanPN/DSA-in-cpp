// Pattern - 10: Half Diamond Star Pattern

#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        for(int k=0; k<n-i-1; k++){
            cout<<" ";
        }
        cout<<endl;
    }
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}