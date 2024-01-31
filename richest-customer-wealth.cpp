class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxSum = 0;
        for (vector<int> i : accounts){
            int sum = 0;
            for (int j : i) sum += j;
            if(sum > maxSum) maxSum = sum;
        }
        return maxSum;
    }
};