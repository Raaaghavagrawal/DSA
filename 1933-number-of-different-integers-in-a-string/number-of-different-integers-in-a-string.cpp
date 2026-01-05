class Solution {
public:
    int numDifferentIntegers(string word) {
        unordered_set<string>nums;
        int i=0,n=word.size();
        while(i<n){
            if(isdigit(word[i])){
                string num;
                while(i<n && isdigit(word[i])) num+=word[i++];
                int j=0,m=num.length();
                while(j<m && num[j]=='0') j++;
                num=num.substr(j);
                nums.insert(num);
            }
            else i++;
        }
        return nums.size();
    }
};