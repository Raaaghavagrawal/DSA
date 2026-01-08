class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>leftsum(n,0),rightsum(n,0),newsum(n,0);
        for(int i=1;i<n;i++) leftsum[i]=leftsum[i-1]+nums[i-1];
        for(int j=n-2;j>=0;j--) rightsum[j]=rightsum[j+1]+nums[j+1];
        for(int k=0;k<n;k++) newsum[k]=abs(leftsum[k]-rightsum[k]);
        return newsum;
    }
};