class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> ans;
        int i = 0;
        while(i<=rowIndex){
            vector<int> ele;
            if(i == 0) ele.push_back(1);
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
            i++;
        }
        return ans.back();
    }
};