// Armstrong number - 371 = 3^3 + 7^3 + 1^3 


#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n, temp, last_n, sum=0;
    cout<<"Enter a number : ";
    cin>>n;
    temp = n;
    while(temp > 0){
        last_n=temp%10;
        sum+=last_n*last_n*last_n;
        temp /= 10;
    }
    if(n == sum) cout<<"\n"<<n<<" is armstrong";
    else cout<<"\n"<<n<<" is not an armstrong";
    return 0;
}