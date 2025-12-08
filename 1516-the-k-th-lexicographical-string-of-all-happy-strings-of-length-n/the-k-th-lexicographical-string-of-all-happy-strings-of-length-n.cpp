class Solution {
public:
    string getHappyString(int n, int k) {
        vector<string>list;
        string s="abc";
        backtracking(s,n,"",list);
        return (list.size()>=k) ? list[k-1]:"";
    }
    void backtracking(string s,int n,string sb,vector<string>&list){
        if(sb.length() == n){
            list.push_back(sb);
            return;
        }
        for(int i=0;i<3;i++){
            if(sb.length()>0 && sb[sb.length()-1]==s[i]) continue;
            sb.push_back(s[i]);
            backtracking(s,n,sb,list);
            sb.pop_back();
        }
    }
};