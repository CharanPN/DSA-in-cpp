#include<iostream>
using namespace std;
int main(){
    string s="abbibi";
    int hash[26]={0};
    for(int i=0; i<s.length(); i++){
        hash[s[i]-'a']++;
    }
    char q;
    cout<<"Enter q : ";
    cin>>q;
    cout<<"Hash of "<<q<<"is "<<hash[q-'a'];
    return 0;
}