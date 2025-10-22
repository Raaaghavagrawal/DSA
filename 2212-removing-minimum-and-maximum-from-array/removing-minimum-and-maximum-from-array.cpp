class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mini=0;
        int maxi=0;
        int n=nums.size();
        for(int i=0;i<n;++i){
            if(nums[mini]<nums[i]) mini=i;
            if(nums[maxi]>nums[i]) maxi=i;
        }
        return min({max(mini+1,maxi+1),max(n-mini,n-maxi),mini+1+n-maxi,maxi+1+n-mini});
    }
};