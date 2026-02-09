class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n=s.size();
        int ones=-1,zeros=0,i=0;
        while(i<n){
            if(s[i]=='1') ones++;
            else zeros++;
            i++;
        }
        s[n-1]='1';
        for(int i=0;i<n-1;i++){
            if(ones>0){
                s[i]='1';
                ones--;
            }
            else s[i]='0';
        }
        return s;
    }
};