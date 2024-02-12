class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2);
        vector<int> cp(nums);
        sort(nums.begin(), nums.end());
        int i = 0;
        int j = nums.size() -1;
        while(i<j){
            if (nums[i] + nums[j] == target){
                for (int it = 0; it<cp.size(); it++){
                    if (cp[it] == nums[i] && ans[0] == 0) ans[0] = it;
                    else if (cp[it] == nums[j]) ans[1] = it;
                }
                break; 
            }
            if (nums[i] + nums[j] > target) j--;
            else i++;
        }
        return ans;
    }
};