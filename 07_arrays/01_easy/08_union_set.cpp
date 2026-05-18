class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        vector<int> unio;
        int n1 = a.size();
        int n2 = b.size();
        int i = 0, j = 0;
        while(i<n1 && j<n2){
            if(a[i]<=b[j]){
                if(unio.size()==0 || unio.back()!=a[i]){
                    unio.emplace_back(a[i]);
                
                }
                i++;
            }
            else{
                if(unio.size()==0 || unio.back()!=b[j]){
                    unio.emplace_back(b[j]);
                }
                j++;
            }
        }
        while(i<n1){
            if(unio.size()==0 || unio.back()!=a[i]){
                    unio.emplace_back(a[i]);
                
            }
            i++;
        }
        while(j<n2){
            if(unio.size()==0 || unio.back()!=b[j]){
                    unio.emplace_back(b[j]);
            }
            j++;
        }
        return unio;
        }
        
        
    
};