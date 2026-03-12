#include<iostream>
using namespace std;
int main(){
    int n=31, count=0;
    for(int i=1; i*i<=n; i++){
        if(n%i==0){
            count++;
            if(n/i != i) count++;
        }  
    }
    if(count==2) cout<<"prime";
    else cout<<"Not a prime";
    return 0;
}

// O(sqrt(n))