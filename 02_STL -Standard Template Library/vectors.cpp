#include<vector>
#include<iostream>
using namespace std;
int main(){
    vector<int> v = {1,2,3,4,5,6,7};
    // v.push_back(1);
    // cout<<v[0];
    // cout<<"\n"<<v.at(0); 
    // v.emplace_back(2);
    // cout<<endl<<v.at(1);

    // for(int i=1; i<=10; i++){
    //     v.emplace_back(i);
    // }
    // for(vector <int>::iterator it= v.begin(); it != v.end(); it++){
    //     cout<<*(it)<<endl;
    // }

    // //  using auto
    // for(auto it=v.begin(); it != v.end(); it++){
    //     cout<<*(it)<<endl;
    // }

    // // using simple auto : for-each loop
    // for(auto it : v){
    //     cout<<it<<" ";
    // }

    // Erase
    
    // v.erase(v.begin()+1);
    for(auto it : v){
        cout<<it<<" ";
    }
    return 0;
}