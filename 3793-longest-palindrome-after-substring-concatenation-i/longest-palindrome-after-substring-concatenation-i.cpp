class Solution {
public:
    bool isPalindrome(const string &s){
        int left=0,right=s.size()-1;
        while(left<right){
            if(s[left]!=s[right]) return false;
            left++;
            right--;
        }
        return true;
    }
    int longestPalindrome(string s, string t) {
        int maxLen=1;
        for(int i=0;i<=s.size();i++){
            for(int j=i;j<=s.size();j++){
                string sub1=s.substr(i,j-i);
                for(int k=0;k<=t.size();k++){
                    for(int l=k;l<=t.size();l++){
                        string sub2=t.substr(k,l-k);
                        string candidate=sub1+sub2;
                        if(isPalindrome(candidate)){
                            maxLen=max(maxLen,(int)candidate.size());
                        }
                    }
                }
            }
        }
        return maxLen;
    }
};