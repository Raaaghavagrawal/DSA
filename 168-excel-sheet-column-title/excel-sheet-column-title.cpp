class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans;
        while(columnNumber){
            columnNumber--;
            char ch='A'+(columnNumber%26);
            ans=ch+ans;
            columnNumber/=26;
        }
        return ans;
    }
};