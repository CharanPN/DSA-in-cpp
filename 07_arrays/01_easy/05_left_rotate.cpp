// Left Rotate Array by One


class Solution {
public:
    void rotateArrayByOne(vector<int>& nums) {
        int temp = nums[0];
        int i, n=nums.size();
        for(i=1; i < n; i++){
            nums[i-1] = nums[i];
        }
        nums[n-1]=temp;
        
    }
};