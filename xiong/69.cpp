class Solution {
public:
    int mySqrt(int x) {
        long int start = 1, bias = 10000;
        // x = (x_0^2 + a) / 2*x_0
        while (bias > 0.5){
            float tmp = (0.5)*(start + x / start);
            bias = abs(tmp - start);
            start = tmp;
    //        cout<<(bias)<<" "<<start<<endl;
        }
    //    cout<<(start);
        return start;
    }
};