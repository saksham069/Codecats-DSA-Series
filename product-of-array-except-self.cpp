class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int prod = 1;
        for (int i : nums){
            prod *= i;
        }
        for (int i = 0; i<nums.size(); i++){
            if (!nums[i]){
                int zProd = 1;
                for(int j = 0; j<nums.size(); j++){
                    if (i != j) zProd *= nums[j];
                }
                ans.push_back(zProd);
            }
            else ans.push_back(prod/nums[i]);
        }
        return ans;
    }
};