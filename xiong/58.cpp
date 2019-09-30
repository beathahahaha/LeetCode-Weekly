
//  Time:  86.41%    OK.
//  Mem:   94.56%    OK.


class Solution {
public:
    int lengthOfLastWord(string s) {
        if (s.size() == 0) return 0;
        if (s.size() == 1 && s[0] == ' ') return 0;
        if (s.size() == 1 && s[0] != ' ') return 1;
        int ans = 0;
        int i = s.size() - 1;
        while(s[i] == ' ' && i >= 0) i--;
        for(; i >= 0; --i){
            if(s[i] != ' ') ans ++;
            else break;
        }
        return ans;
    }
};