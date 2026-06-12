class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for (string str:strs){ // it will take words from strs one by one
            string key = str; //it will make a copy of words which will taken out by str from strs 
            sort(key.begin(),key.end()); // it will sort word of key like eat = aet
            mp[key].push_back(str); // it will store all words of str in map of key  one by one like = "aet":["eat"];

        }
        vector<vector<string>>ans;// it will make a bag ans in which we will store mp[key]
        for (auto it :mp){
            ans.push_back(it.second); // it will store all second one's like bat, nat tan, ate eat tea 
        }
        return ans;

        

        
    }
};