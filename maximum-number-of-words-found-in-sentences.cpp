class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int mx = 0;
        for (string i : sentences){
            int count = 1; 
            for (char j : i){
                if (j == ' ') ++count;
            }
            if (count > mx) mx = count;
        }
        return mx;
    }
};