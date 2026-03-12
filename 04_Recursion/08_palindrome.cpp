#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s = "Madam";
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout<<s;
    string temp =s;
    reverse(s.begin(), s.end());
    if(s == temp) cout<<"Palindrome";
    else cout<<"Not a Palindrome";
    cout<<s.length();
    return 0;
}