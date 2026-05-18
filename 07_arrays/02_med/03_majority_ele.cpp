// optimal - using Moors voting algorithm 

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int el, cnt = 0;
        for(int i = 0; i < n; i++){
            if(cnt == 0){
                el = nums[i];
                cnt = 1;
            }
            else if(el == nums[i]) cnt++;
            else cnt--;
        }
        return el;
    }
};