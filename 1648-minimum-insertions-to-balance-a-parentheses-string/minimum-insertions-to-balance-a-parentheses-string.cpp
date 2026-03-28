class Solution {
public:
    int minInsertions(string s) {
        int n=s.length();
        int mini=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                cnt++;
                continue;
            }
            if(cnt==0) mini++;
            else cnt--;
            if(i==n-1) mini++;
            else{
                if(s[i+1]!=')') mini++;
                else i++;
            }
        }
        return mini+(2*cnt);
    }
};