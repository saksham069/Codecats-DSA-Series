class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int ans = 0;
        int len = nums.size();
        for (int i = 0; i<len; i++){
            int ele = nums[i];
            if (len % (i+1) == 0) ans += ele * ele;
        }
        return ans;
    }
};