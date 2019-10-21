class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(m == 0){
            nums1 = nums2;
            return;
        }
        if(n == 0){
            return;
        }
        int start1 = 0, start2 = 0, max1 = nums1[m - 1], tl = m + n;
        for(start1 = 0; start1 < m + n; ++start1){
            if(nums1[start1] == max1 && nums1[start1] <= nums2[start2]) {
                for(; start2 < n; ++start2){
                    // cout<<start2<<endl;
                    nums1.insert(nums1.begin() + m, nums2[start2]);
                    m++;
                }
                break;
            }
            if(nums1[start1] < nums2[start2]) continue;
            

            // nums1[start1] >= nums[start2]
            nums1.insert(nums1.begin() + start1, nums2[start2]);
            m++;
            start2++;
            if(start2 >= n) break;
        }
        for(int i = nums1.size() - 1; i >= tl; --i){
            nums1.erase(nums1.begin() + i);
        }
    }
};