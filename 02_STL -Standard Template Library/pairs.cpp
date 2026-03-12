#include<utility>
#include<iostream>
using namespace std;
int main(){
    pair<int,int> p = {1,2};
    cout<<p.first<<endl;
    cout<<p.second<<endl;

    
    pair <string, string> s;
    s ={"Charan", "PN"};
    cout<<s.first<<endl;
    cout<<s.second;

    pair <int, pair<int,pair<int, int>>> x = {1,{2,{3,4}}};
    cout<<x.first<<endl;
    cout<<x.second.first<<" "<<x.second.second.first;

    pair <int, int> arr[] = { {1,2}, {11,22}, {111,222}};
    cout<<arr[1].first<<endl;

    pair <int, pair<int,int>> a[] = {{1,{2,3}}};
    cout<<a[0].second.first;
    return 0;
}