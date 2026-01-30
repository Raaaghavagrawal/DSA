class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        long long prefix=0;
        for(int val:nums) prefix+=val;
        for(int k=n-1;k>=0;k--){
            long long sumSmaller=prefix-nums[k];
            if(sumSmaller>nums[k]) return prefix;
            prefix-=nums[k];
        }
        return -1;
    }
};