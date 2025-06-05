class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int>ans(amount+1,amount+1);
        ans[0]=0;
        for(int i=1;i<=amount;i++){
            for(int c:coins){
                if(c<=i){
                    ans[i]=min(ans[i],ans[i-c]+1);
                }
            }
        }
        return ans[amount]>amount?-1:ans[amount];
    }
};