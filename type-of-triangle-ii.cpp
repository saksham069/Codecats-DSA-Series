class Solution {
public:
    string triangleType(vector<int>& nums) {
        int total = nums[0] + nums[1] + nums[2];
        if (nums[0]<<1 >= total || nums[1]<<1 >= total || nums[2]<<1 >= total) return "none";
        if (nums[0] == nums[1] || nums[1] == nums[2] || nums[2] == nums[0]){
            if (nums[0] * 3 == total) return "equilateral";
            return "isosceles";
            }
        return "scalene";
    }
};