class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n =heights.size();
        int maxWater=0;
        int lp=0,rp=n-1;

        while (lp<rp){
            int w=rp-lp;
            int ht=min(heights[lp],heights[rp]);
            int currWater =w*ht;
            maxWater=max(maxWater,currWater);

            heights[lp]<heights[rp]?lp++:rp--;
        }
        return maxWater;
        
    }
};
