class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if(matrix.size() == 0) return vector<int>{};
        vector<int> ans;
        int start[2] = {0, 0}, d = 0;
        int rowl = matrix.size(), coll = matrix[0].size();
        int rowc = rowl, colc = coll;
        int times = 0;
        while(true){
            if(ans.size() == rowl * coll) return ans;
            if(d == 0){
                if(times + 1 >= colc){
                    ans.push_back(matrix[start[0]][start[1]]);
                    d = 1;
                    rowc --;
                    times = 0;
                    start[0] += 1;
                    continue;
                }
                ans.push_back(matrix[start[0]][start[1]]);
                start[1] += 1;
                times += 1;
            }else if(d == 1){
                if(times + 1 >= rowc){
                    ans.push_back(matrix[start[0]][start[1]]);
                    d = 2;
                    colc --;
                    times = 0;
                    start[1] -= 1;
                    continue;
                }
                ans.push_back(matrix[start[0]][start[1]]);
                start[0] += 1;
                times += 1; 
            }else if(d == 2){
                if(times + 1 >= colc){
                    ans.push_back(matrix[start[0]][start[1]]);
                    d = 3;
                    rowc --;
                    times = 0;
                    start[0] -= 1;
                    continue;
                }
                ans.push_back(matrix[start[0]][start[1]]);
                start[1] -= 1;
                times += 1;
            }else if(d == 3){
                if(times + 1 >= rowc){
                    ans.push_back(matrix[start[0]][start[1]]);
                    d = 0;
                    colc --;
                    times = 0;
                    start[1] += 1;
                    continue;
                }
                ans.push_back(matrix[start[0]][start[1]]);
                start[0] -= 1;
                times += 1; 
            }
        }
        return ans;
    }
};