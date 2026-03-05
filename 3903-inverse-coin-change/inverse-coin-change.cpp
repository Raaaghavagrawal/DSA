class Solution {
public:
    vector<int> findCoins(vector<int>& numways) {
        int n=numways.size();
        vector<int>dp(n+1,0);
        dp[0]=1;
        vector<int>result;
        for(int i=1;i<=n;i++){
            if(dp[i]!=numways[i-1]){
                result.push_back(i);
                for(int j=i;j<=n;j++) dp[j]+=dp[j-i];
            }
        }
        for(int i=1;i<=n;i++){
            if(dp[i] != numways[i-1]) return {};
        }
        return result;
    }
};