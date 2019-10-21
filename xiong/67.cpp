class Solution {
public:
    string addBinary(string a, string b) {
        string s, l;
        if (a.size() <= b.size()) {s = a; l = b;}
        else {s = b; l = a;}
        int start = s.size() - 1, lstart = l.size() - 1, c = 0;
        while(lstart >= 0){
            start = s.size() - (l.size() - lstart - 1) - 1;
            int tmp = -1;
            if(start >= 0){
                tmp = (s[start] - '0') + (l[lstart] - '0') + c;
                c = 0;
            }else{
                tmp = (l[lstart] - '0') + c;
                c = 0;
            }

            if(tmp == 1){
                l[lstart] = '1';
            }else if(tmp == 2){
                l[lstart] = '0';
                c = 1;
            }else if(tmp ==3){
                l[lstart] = '1';
                c = 1;
            }
    //        cout<<start<<" "<<lstart<<" "<<tmp<<endl;
            lstart --;

        }
        if(c == 1){
            l = '1' + l;
        }

        return l;
    }

};