class Solution {
public:
int func(vector<int>& arr, int low, int high){
        int i = low;
        int j = high;
        while(i<j){
            while(arr[low]<=arr[i] && i<high){
                i++;
            }
            while(arr[low]>arr[j] && j>low){
                j--;
            }
            if(i < j){
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[low], arr[j]);
        return j;
    }

    void qs(vector<int>& nums, int low, int high){
        while(low < high){
            int part = func(nums, low, high);
            qs(nums, low, part-1);
            qs(nums, part+1, high);
        }
   
    }

    vector<int> quickSort(vector<int>& nums) {
        qs(nums, 0, nums.size()-1);
        return nums;
        
    }
    
};
