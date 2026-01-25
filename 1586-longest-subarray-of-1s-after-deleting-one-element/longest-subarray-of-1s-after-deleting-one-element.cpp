class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        const int n=nums.size();
        int zeroes=0,ans=0;
        for(int l=0,r=0;r<n;r++){
            zeroes+=(nums[r]==0);
            zeroes-=(zeroes > 1 && nums[l++]==0);
            ans=max(ans,r-l);
        }
        return ans;
    }
};