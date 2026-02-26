class Solution {
public:
    bool scoreBalance(string s) {
        int total=0;
        for(char c:s) total+=c-'a'+1;
        if(total%2==1) return false;
        int prefix=0;
        for(char c:s){
            prefix+=c-'a'+1;
            if(prefix==total/2) return true;
        }
        return false;
    }
};