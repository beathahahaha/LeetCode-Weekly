
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits.size() == 1 && digits[0] == 0){
            digits[0] = 1;
            return digits;
        }
        if(digits.size() == 1 && digits[0] == 9){
            digits[0] = 1;
            digits.push_back(0);
            return digits;
        }
        int tmp = 1;
        for(int i = digits.size() - 1; i >= 0; --i){
            int plus = digits[i] + tmp;
            if(plus >= 10){
                tmp = 1;
                digits[i] = plus - 10;
            }else{
                digits[i] = plus;
                tmp = 0;
                break;
            }
        }
        if(tmp == 1){
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};