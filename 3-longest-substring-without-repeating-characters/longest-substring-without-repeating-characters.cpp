class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>win;
        int left=0,maxi=0;
        for(int i=0;i<s.size();i++){
            while(win.count(s[i])){
                win.erase(s[left]);
                left++;
            }
            win.insert(s[i]);
            maxi=max(maxi,i-left+1);         
        }
        return maxi;
    }
};