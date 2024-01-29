class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int result = 0;
        for (string i : operations) {
            if(i == "X++" || i == "++X") result++;
            else result--;
        }
        return result;
    }
};