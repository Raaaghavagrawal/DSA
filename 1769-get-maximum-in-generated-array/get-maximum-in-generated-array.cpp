class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n==0) return 0;
        vector<int>nums(n+1);
        nums[0]=0,nums[1]=1;
        int mx=1, i=2;
        while(i<=n){
            if(!(i&1)) nums[i]=nums[i/2];
            else nums[i]=nums[i/2]+nums[(i/2)+1];
            mx=max(mx,nums[i]);
            i++;
        }
        return mx;
    }
};