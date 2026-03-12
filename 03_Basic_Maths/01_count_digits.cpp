#include<iostream>
using namespace std;
int main(){
    int n, count=0;
    cout<<"Enter a number : ";
    cin>>n;
    while(n>0){
        count++;
        n /= 10;
    }
    cout<<"\n"<<count<<" digits";

}

// time complexity : O(log10(n))

// count = log10(n) + 1 (gives same result)