// Pattern-19: Symmetric-Void Pattern

#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<"*";
        }
        for(int s=0; s<i*2; s++){
            cout<<" ";
        }
        for(int j=0; j<n-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        for(int s=0; s<(n-i-1)*2; s++){
            cout<<" ";
        }
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}