class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int>s1(256,0);
        vector<int>s2(256,0);
        int len=s.length();
        if(len!=t.length()) return false;
        for(int i=0;i<len;i++){
            if(s1[s[i]] != s2[t[i]]) return false;
            s1[s[i]]=i+1;
            s2[t[i]]=i+1;
        }
        return true;
    }
};