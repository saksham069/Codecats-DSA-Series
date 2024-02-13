class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int mx = 0;
        int count = 0;
        string sub = "";
        vector<int> ab(256);
        const int len = s.length();
        for (int i = 0; i<len; i++){
            if (ab[s[i]]) {
                ab.assign(256,0);
                i = i - count + sub.find(s[i]) + 1;
                sub = s[i];
                count = 1;
            }
            else{
                count++;
                sub += s[i];
            }
            ++ab[s[i]];
            if (count > mx) mx = count;
        }
        return mx;
    }
};