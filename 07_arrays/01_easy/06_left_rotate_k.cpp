// Left Rotate Array by K Places

class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {
        
        int n=nums.size();
        k = k % n;
        
        int temp[k];
        int j=0;
        
        for(int i=0; i<k; i++){
            temp[i] = nums[i];
        }
        for(int i=k; i<n; i++){
            nums[j++] = nums[i];
        }
        for(int i=0; i<k; i++){
            nums[j++] = temp[i];
        }
    }
};