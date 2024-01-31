class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        int i = 0, j = n, len = n<<1;
        int count = 0;
        while(count < len){
            if(count++%2 == 0) ans.push_back(nums[i++]);
            else ans.push_back(nums[j++]);
        }
        return ans;
    }
};