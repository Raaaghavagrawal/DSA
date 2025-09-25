class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>count(26,0);
        int l=0,maxCnt=0,res=0;
        for(int i=0;i<s.size();i++){
            count[s[i]-'A']++;
            maxCnt=max(maxCnt,count[s[i]-'A']);

            while((i-l+1)-maxCnt > k){
                count[s[l]-'A']--;
                l++;
            }
            res=max(res,i-l+1);
        }
        return res;
    }
};