class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if(rowIndex == 0) return vector<int>{1};
        if(rowIndex == 1) return vector<int>{1, 1};
        vector<int> ans;
        long int c = 1;
        ans.push_back(c);
        for(int i = 1; i <= rowIndex; ++i){
//            cout<<c * ((rowIndex - i + 1.0) / i)<<endl;
            c = c * (rowIndex - i + 1.0) / i;
            ans.push_back((int)c);
        }
        return ans;
    }
};