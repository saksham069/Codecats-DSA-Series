class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int ans = 0;
        int len = nums.size();
        for (int i = 0; i<len; i++)
        if (numOfSetBits(i) == k) ans += nums[i]; 
        return ans;
    }
    int numOfSetBits(int x){
        int count = 0;
        while(x != 0){
            if (x & 1 == 1) ++count;
            x>>=1;
        }
        return count;
    }
};
