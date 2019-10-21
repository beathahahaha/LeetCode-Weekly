bool isNumOrLetter(char ch){
    if(ch >= '0' && ch <= '9') return true;
    if(ch >= 'a' && ch <= 'z') return true;
    if(ch >= 'A' && ch <= 'Z') return true;
    return false;
}

bool isLowerCase(char ch){
    if(ch >= 'a' && ch <= 'z') return true;
    return false;
}

bool isEqualNumOrLetter(char ch1, char ch2){
    if(ch1 == ch2) return true;
    if(isLowerCase(ch1)){
        if(ch1 - ch2 == 32) return true;
        return false;
    }
    if(isLowerCase(ch2)){
        if(ch2 - ch1 == 32) return true;
        return false;
    }
    return false;
}

class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size() == 0) return true;
        int start = 0, endd = s.size() - 1;
        while(start < endd){
            if(!isNumOrLetter(s[start])){
                start ++;
                continue;
            }
            if(!isNumOrLetter(s[endd])){
                endd --;
                continue;
            }
            if(!isEqualNumOrLetter(s[start], s[endd])){
                cout<<s[start]<<" "<<s[endd]<<endl;
                return false;
            }else{
                start ++;
                endd --;
            }
        }
        return true;
    }
};