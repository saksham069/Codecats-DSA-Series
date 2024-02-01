class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int max = 0;
        for(int i : candies) if(i>max) max = i;
        max -= extraCandies;
        for (int i : candies) ans.push_back(i >= max);
        return ans;
    }
};