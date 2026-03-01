class Solution {
public:
    int MOD=1e9+7;
    int dp[1001][1001];
    bool isprime(char ch){ return ch=='2'||ch=='3'||ch=='5'||ch=='7';}
    int topdown(int ind,int k,int &minlength,string &s){
        if(ind==s.size() && k==0) return 1;
        if(ind==s.size() || k==0) return 0;
        if(!isprime(s[ind])) return dp[ind][k]=0;
        if(dp[ind][k]!=-1) return dp[ind][k];
        long long ans=0;
        for(int i=ind;i<s.size();i++){
            if(i-ind+1 >= minlength && !isprime(s[i])){
                int rem=(k-1)*minlength;
                if(s.size()-i-1>=rem) ans=(ans+topdown(i+1,k-1,minlength,s)%MOD)%MOD;
                else break;
            }
        }
        return dp[ind][k]=ans;
    }
    int beautifulPartitions(string s, int k, int minlength) {
        memset(dp,-1,sizeof(dp));
        return topdown(0,k,minlength,s);
    }
};