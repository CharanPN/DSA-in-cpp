class Solution {
  public:
    vector<int> intersection(vector<int> &arr1, vector<int> &arr2) {
        // code here
        vector<int> in;
        int i = 0;
        int j = 0;
        int n1 = arr1.size();
        int n2 = arr2.size();
        while(i<n1 && j<n2){
            if(arr1[i]>arr2[j]){
                j++;
            }
            else if(arr1[i]<arr2[j]){
                i++;
            }
            else{
                if(in.empty() || in.back() != arr1[i]){
                    in.push_back(arr1[i]);
                }
                i++;
                j++;
            }
            
        }
        return in;
    }
};