class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows == 0) return vector<vector<int>>{};
        vector<int> first = {1};
        if(numRows == 1) return vector<vector<int>>{first};
        vector<int> sec   = {1, 1};
        if(numRows == 2) return vector<vector<int>>{first, sec};
        vector<vector<int>> ans = {first, sec};
        for(int i = 0; i < numRows - 2; ++i){
            vector<int> now = {};
            vector<int> b = ans.back();
            now.push_back(1);
            for(int j = 0; j < b.size() - 1; ++j){
                now.push_back(b[j] + b[j + 1]);
            }
            now.push_back(1);
            ans.push_back(now);
        }
        return ans;
        
    }
};