#include<iostream>
using namespace std;
int fb(int n){
    if(n<=1) return n;
    return fb(n-1)+fb(n-2);
}
int main(){
    int x = fb(4);
    cout<<x;
    return 0;
}