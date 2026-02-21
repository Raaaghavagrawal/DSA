class Solution {
public:
    long long minOperationsToMakeMedianK(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        long long ans=0;
        for(int i=0;i<n;i++){
            if(i<n/2) ans+=max(0,nums[i]-k);
            else if(i==n/2) ans+=abs(nums[i]-k);
            else ans+=max(0,k-nums[i]);
        }
        return ans;
    }
};