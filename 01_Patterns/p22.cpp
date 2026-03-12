// Pattern - 22: The Number Pattern

#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0; i<2*n-1;i++){
        for(int j=0; j<2*n-1; j++){
            int top=i;
            int left=j;
            int right=(2*n-2)-j;
            int bottom=(2*n-2)-i;
            cout<<n-min(min(left,right),min(top,bottom));
        }
        cout<<endl;
    }
    return 0;
}