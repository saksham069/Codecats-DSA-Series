class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int arr[101] = {0};
        for (int i : nums) arr[i]++;
        int count = 0;
        for(int i : arr) if(i>1) count += i*(i-1)>>1;
        return count;
    }
};