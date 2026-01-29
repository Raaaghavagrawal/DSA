class Solution {
public:
    int balancedString(string s) {
        int length=s.size();
        unordered_map<char,int>charCount;
        int left=0;
        int ans=length;
        int targetCount=length/4;
        for(char c:s){
            charCount[c]++;
        }
        for(int right=0;right<length;right++){
            charCount[s[right]]--;
            while(left<length && charCount['Q']<=targetCount && charCount['W'] <= targetCount &&
                    charCount['E'] <= targetCount && charCount['R'] <= targetCount){
                        ans=min(ans,right-left+1);
                        charCount[s[left]]++;
                        left++;
                    }
        }
        return ans;
        
    }
};