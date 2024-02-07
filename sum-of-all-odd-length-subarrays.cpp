class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int ans = 0;
        int len = arr.size();
        for (int i = 0; i<len; i++){
            for (int j = i; j<len; j+=2){
                for (int k = i; k<=j; k++) ans += arr[k];
            }
        }
        return ans;
    }
};