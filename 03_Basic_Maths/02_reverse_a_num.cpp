#include<iostream>
using namespace std;
int main(){
    int rev_num =0, n, last_num;
    cout<<"Enter number to reverse :";
    cin>>n;
    while(n>0){
        last_num = n%10;
        n /=10;
        rev_num = rev_num*10 +last_num;
    }
    cout<<"\nReverse ="<<rev_num;
    return 0;
}