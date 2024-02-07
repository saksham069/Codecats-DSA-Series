class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        int i = 0;
        while(++i<=numRows){
            vector<int> ele;
            if(i == 1) ele.push_back(1);
            else{
                vector<int> i = ans.back();
                int len = i.size();
                ele.push_back(1);
                for (int j = 0; j<len-1; j++){
                    ele.push_back(i[j] + i[j+1]);
                }
                ele.push_back(1);
            }
            ans.push_back(ele);
        }
        return ans;
    }
};