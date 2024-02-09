class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;
        for(int i = 0; i<k; i++){
            sum += nums[i];
        }
        int mx = sum;
        int n = nums.size() - k;
        for (int i = 0; i<n; i++){
            sum -= nums[i] - nums[k+i];
            if (sum>mx) mx = sum;
        }
        return double(mx)/k;
    }
};