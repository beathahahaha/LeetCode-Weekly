#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

//  Time:  7.58%     Neet to be optimized.
//  Mem:   88.95%    OK

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i = 0, j = 0;
        int maxVal = INT_MIN;
        while (i < nums.size() && j < nums.size()){
            if (i == j && nums[i] > 0){
                if(nums[i] > maxVal) maxVal = nums[i];
                j++;
                continue;
            }
            if (i == j && nums[i] <= 0) {
                if(nums[i] > maxVal) maxVal = nums[i];
                i++; j++; continue;}
            
            int sumtmp = 0;
            for (int s = i; s <= j; ++s){
                sumtmp += nums[s];
            }
            if (sumtmp > 0){
                if (sumtmp > maxVal) maxVal = sumtmp;
                j++;
            }else{
                i = j + 1;
                j = i;
            }
        }
        return maxVal;
    }
};