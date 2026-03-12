// Pattern - 20: Symmetric-Butterfly Pattern

#include<iostream>
using namespace std;
int main(){
    int n=5;
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<=i; j++){
    //         cout<<"*";
    //     }
    //     for(int s=0; s<2*(n-1)-2*i; s++){
    //         cout<<" ";
    //     }
    //     for(int j=0; j<=i; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for(int i=0; i<n-1; i++){
    //     for(int j=0; j<n-i-1; j++){
    //         cout<<"*";
    //     }
    //     for(int s=0; s<(i+1)*2; s++){
    //         cout<<" ";
    //     }
    //     for(int j=0; j<n-i-1; j++){ 
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    int iniS=2*n-2;
    for(int i=1; i<=n*2-1; i++){
        int stars=i;
        if(i>n) stars=(2*n-i);
        for(int j=1; j<=stars; j++){
            cout<<"*";
        }
        for(int s=1; s<=iniS; s++){
            cout<<" ";
        }
        for(int j=1; j<=stars; j++){
            cout<<"*";
        }
        if(i<n) iniS-=2;
        else iniS+=2;
        cout<<endl;
    }
    return 0;
}