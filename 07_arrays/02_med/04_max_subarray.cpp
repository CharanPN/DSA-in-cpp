// Better

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxsum = INT_MIN, sum;
        for(int i = 0; i < n; i++){
            sum = 0;
            for(int j = i; j < n; j++){
                sum += nums[j];
                if(sum > maxsum){
                    maxsum = sum;
                }
            }
        }
        return maxsum;
    }
};

// Kadane's Algorithm

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN, sum = 0;
        for(int i = 0; i < n; i++){
            sum += nums[i];
            if(sum < 0) sum = 0;
            if(sum > maxi) maxi = sum; 
        }
        return maxi;
    }
};