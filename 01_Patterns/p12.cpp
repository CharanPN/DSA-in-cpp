// Pattern - 12: Number Crown Pattern

#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        for(int s=0; s<2*n-2*i; s++){
            cout<<" ";
        }
        for(int k=i; k>=1; k--){
            cout<<k;
        }
        cout<<endl;
    }
    return 0;
}