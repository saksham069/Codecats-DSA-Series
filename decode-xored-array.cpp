class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> ans;
        int len = encoded.size();
        ans.push_back(first);
        for (int i = 0; i<len; i++){
            ans.push_back(encoded[i] ^ ans[i]);
        }
        return ans;
    }
};