#include<iostream>
using namespace std;

void rec(int n){
    if (n==0) return;
    printf("\nCharan");
    rec(n-1);
}

int main(){
    int n;
    cout<<"n ? ";
    cin>>n;
    rec(n);
    return 0;
}