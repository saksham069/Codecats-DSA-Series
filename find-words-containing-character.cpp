class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        int len = words.size();
        for (int i = 0; i<len; i++){
            if(words[i].find(x) < words[i].length()) ans.push_back(i);
        }
        return ans;
    }
};