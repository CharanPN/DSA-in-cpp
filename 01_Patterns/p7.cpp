// Pattern - 7: Star Pyramid

#include<iostream>
using namespace std;
// int main(){
//     int n=5;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n-i-1; j++){
//             cout<<" ";
//         }
//         for(int k=0; k<=i; k++){
//             cout<<"*";
//         }
//         for(int z=0; z<i; z++){
//             cout<<"*";
//         }
//         cout<<endl;
        
//     }
// }

int main(){
    int n= 5;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        for(int k=0; k<i*2+1; k++){
            cout<<"*";
        }
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}