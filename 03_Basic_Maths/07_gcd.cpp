#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    while(a>0 && b>0){
        if(a>b) a -=b;
        else b -=a;
    }
    if(a>0) cout<<"GCD : "<<a;
    else cout<<"GCD : "<<b;
    return 0;
}


// time complexity : O(log(min(a,b)))