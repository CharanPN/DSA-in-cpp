#include<iostream>
using namespace std;
int main(){
    int n,n2, rev_n=0, last_num;
    cout<<"Enter a number to check palindrome : ";
    cin>>n;
    n2 = n;
    while(n2>0){
        last_num =n2%10;
        rev_n = rev_n*10 + last_num;
        n2 /=10; 
    }
    if(n == rev_n) cout<<"true";
    else cout<<"false";
    return 0;
}