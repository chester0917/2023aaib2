class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int N = s.length();
        int one = 0;
        for(int i=0; i<N; i++){
            if(s[i]=='1') one += 1;
        }
        string ans;
        for(int i=0; i<one-1; i++) ans += '1';
        for(int i=0; i<N-one-1; i++) ans += '0';
        ans += '1';
        return ans;
    }
};
