class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> arr;
        for (vector<int> i : points){
            arr.push_back(i[0]);
        }
        sort(arr.begin(), arr.end());
        int len = arr.size(), maxd = 0;
        for (int i = 1; i<len; i++){
            int c = arr[i] - arr[i-1];
            if (c > maxd) maxd = c;
        }
        return maxd;
    }
};