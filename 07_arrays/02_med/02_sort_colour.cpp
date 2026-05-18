// Sort an array of 0s, 1s and 2s

// Brute force

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int count0 = 0, count1 = 0, count2 = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == 0) count0++;
            else if(nums[i] == 1) count1++;
            else count2++;
        }
        int index = 0;
        while(count0--){
            nums[index++] = 0;
        }
        while(count1--){
            nums[index++] = 1;
        }
        while(count2--){
            nums[index++] = 2;
        }

    }
};


// optimal

class Solution {
public:
    void sortColors(vector<int>& nums) {
       int low = 0, mid = 0, high = nums.size() - 1;
       while(mid <= high){
        if(nums[mid] == 0){
            swap(nums[mid], nums[low]);
            mid++;
            low++;
        }
        else if(nums[mid] == 1){
            mid++;
        }
        else {
            swap(nums[mid], nums[high]);
            high--;
        }
       }

    }
};