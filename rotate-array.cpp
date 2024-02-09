class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int l = nums.size();
        k %= l;
        for(int i = 0; i<(l-k)/2; i++){
            int temp = nums[i];
            nums[i] = nums[(l-k)-i-1];
            nums[(l-k)-i-1] = temp;
        }
        for(int i = 0; i<k/2; i++){
            int temp = nums[(l-k)+i];
            nums[(l-k)+i] = nums[l-i-1];
            nums[l-i-1] = temp;
        }
        for(int i = 0; i<l/2; i++){
            int temp = nums[i];
            nums[i] = nums[l-i-1];
            nums[l-i-1] = temp;
        }
    }
};