class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans;
        for(int i = 0; i < n; ++i){
            vector<int> tmp;
            for(int j = 0; j < n; ++j){
                tmp.push_back(-1);
            }
            ans.push_back(tmp);
        }
        
        int dir = 0; // 0, 1, 2, 3
        
        int all = n * n, now = 1;
        int nowRow = 0, nowCol = 0;
        vector<int> times = {n, n, n, n};
        int nowTimes = 0;
        // 0
        while(now <= all){
            if(dir == 0){
                ans[nowRow][nowCol] = now;
                nowTimes ++;
                now ++;
                nowCol ++;
                if(nowTimes >= times[0]){
                    nowRow += 1;
                    nowCol -= 1;
                    dir = 1;
                    nowTimes = 0;
                    times[1] --;
                    times[3] --;
                }
            }else if(dir == 1){
                ans[nowRow][nowCol] = now;
                now ++;
                nowRow ++;
                nowTimes ++;
                if(nowTimes >= times[1]){
                    nowCol -= 1;
                    nowRow -= 1;
                    dir = 2;
                    nowTimes = 0;
                    times[0] --;
                    times[2] --;
                }
            }else if(dir == 2){
                ans[nowRow][nowCol] = now;
                now ++;
                nowTimes ++;
                nowCol --;
                if(nowTimes >= times[2]){
                    nowRow -= 1;
                    nowCol += 1;
                    dir = 3;
                    nowTimes = 0;
                    times[1] --;
                    times[3] --;
                }
            }else if(dir == 3){
                ans[nowRow][nowCol] = now;
                now ++;
                nowTimes ++;
                nowRow --;
                if(nowTimes >= times[3]){
                    nowCol += 1;
                    nowRow += 1;
                    dir = 0;
                    nowTimes = 0;
                    times[2] --;
                    times[0] --;
                }
            }
        }
        return ans;
    }
};