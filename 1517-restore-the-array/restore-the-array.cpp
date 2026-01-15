class Solution {
public:
    const int mod=1e9+7;
    int numberOfArrays(string s, int k) {
        int i,j,n=s.length();
        vector<int>dp(n+1,0);
        dp[n]=1;
        for(i=n-1;i>=0;i--){
            long long ways=0,currNum=0;
            for(j=i;j<n;j++){
                int currDig=s[j]-'0';
                currNum=10*currNum+currDig;
                if(currNum<1 || currNum>k) break;
                ways=(ways+dp[j+1])%mod;
            }
            dp[i]=ways;
        }
        return dp[0];
    }
};