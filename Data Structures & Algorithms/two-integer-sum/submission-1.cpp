class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for (int i=0;i<nums.size();i++){
            int complement=target-nums[i];//it means that we are doing minus our first index number with target to get a complement like first we have 3 so 7-3=4 so complement =4
            if (mp.find(complement)!=mp.end()){
                return {mp[complement],i};
            }
            mp[nums[i]]=i; // means if not found then store element and its index in that map

            
        }
        return {};
        
    }
};
