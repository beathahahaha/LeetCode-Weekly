#include <iostream>
#include <algorithm>
class Solution {
public:
    string getPermutation(int n, int k) {
        string ans = "";
        for(int i = 0; i < n; ++i){
            ans = ans + (char)(i + 1 + '0');
        }
        for(int i = 0; i < k - 1; ++i){
            next_permutation(ans.begin(), ans.end());
        }
        return ans;
    }
};