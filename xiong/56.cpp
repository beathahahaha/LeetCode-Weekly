bool cmp(vector<int> a, vector<int> b){
    if(a[0] < b[0])
        return true;
    return false;
}
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size() == 0) return vector<vector<int>>{};
        if(intervals.size() == 1) return intervals;
        sort(intervals.begin(), intervals.end(), cmp);

        vector<vector<int>> ans;
        vector<int> cur = intervals[0];
        int curind = 0, sl = intervals.size();
        for(int i = 1; i < sl; ++i){
            vector<int> now = intervals[i];
            if(cur[1] >= now[0]){
                // merge
                if(now[1] >= cur[1]){
                    cur[1] = now[1];
                }else{}
                
                // intervals.erase(intervals.begin() + i);
                // intervals.erase(intervals.begin() + curind);
                // intervals.insert(intervals.begin() + curind, cur);
                if(i == sl - 1){
                    ans.push_back(cur);
                }
            }else{
                ans.push_back(cur);
                cur = intervals[i];
                curind = i;
            }
        }
        if(ans.back() != cur) ans.push_back(cur);
        return ans;
    }
};