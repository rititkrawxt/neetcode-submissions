class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>s;
        for (int num:nums){
            if (s.find(num)!=s.end()){
                return true;
            }
            s.insert(num);
        }
        return false;        
        
        
    }
};