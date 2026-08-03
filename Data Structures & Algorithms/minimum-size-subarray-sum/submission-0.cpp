class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int currSum=0;
        int low=0;
        int minLen=INT_MAX;
        for (int high=0;high<nums.size();high++){
            currSum+=nums[high];
            while(currSum>=target){
                minLen=min(minLen,high-low+1);
                currSum-=nums[low];
                low++;
            }

        }
        return minLen==INT_MAX?0:minLen;
        
    }
};