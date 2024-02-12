class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int num;
        for(int i : nums){
            if (!count) {
                num = i;
                count++;
            }
            else if (num == i) count++;
            else count--;
        }
        return num;
    }
};