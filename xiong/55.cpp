class Solution {
public:
    bool canJump(vector<int>& nums) {
        int nl = nums.size();
        int f[nl];
        memset(f, 0, sizeof(f));
        int j = nl - 1;
        for(int i = nl - 1; i >= 0; --i){
            if(i + nums[i] >= j){
                f[i] = 1;
            }
        }
        for(int i = nl - 1; i >= 0; --i){
            if(f[i] == 1) continue;
            int a = 0;
            for(int j = 1; j <= nums[i]; ++j){
                if(i + j >= nl) break;
                if(f[i + j] == 1){
                    f[i] = 1;
                    break;
                }
            }
        }
        return f[0];
    }
};