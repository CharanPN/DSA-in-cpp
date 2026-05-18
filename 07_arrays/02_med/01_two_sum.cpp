// Two-sum 

// Brute force

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(nums[i]+nums[j]==target)
                    return {i,j};
            }
        }
        return {};
    }
};

// Better

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mpp;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            int temp = target - nums[i];
            if(mpp.find(temp) != mpp.end()){
                return {mpp[temp], i};
            }
            else mpp[nums[i]] = i;
        }
        return {-1,-1};
    }
};


// Optimal

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0, right = n-1;
        vector<pair<int,int>> num_i;
        for(int i = 0; i < n; i++){
            num_i. push_back({nums[i], i});
        }
        sort(num_i.begin(), num_i.end());
        while(left < right){
            int temp = num_i[left].first + num_i[right].first;
            if(temp == target)
                return {num_i[left].second, num_i[right].second};
            else if(temp < target) left++;
            else right--;
        }
        return {-1, -1};
    }
};