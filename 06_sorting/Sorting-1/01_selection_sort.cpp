#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    int arr[n];
    cout<<"Enter arr : ";
    for(int i=0; i<n; i++) cin>>arr[i];

    for(int i=0; i<n-1; i++){
        int min = i;
        for(int j=i; j<n; j++){
            if(arr[min]>arr[j])
                min = j;
        }
        swap(arr[i],arr[min]);
    }

    cout<<"Sorted :";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}