class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        for (int i : nums){
            int count = 0;
            for (int j : nums){
                if (j<i) count ++;
            }
            ans.push_back(count);
        }
        return ans;
    }
};