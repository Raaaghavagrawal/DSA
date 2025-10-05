class Solution {
public:
    string longestPrefix(string s) {
        int n=s.length();
        vector<int>lps(n);
        for(int i=1,j=0;i<n;++i){
            if(s[i]==s[j]) lps[i] = ++j;
            else if(j!=0) j=lps[j-1], --i;
        }
        return s.substr(0,lps[n-1]);
    }
};