class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        int maxi=*max_element(nums.begin(),nums.end());
        long long countmaxi=0,cnt=0;
        for(int i=0,j=0;j<n;j++){
            countmaxi+=(nums[j]==maxi);
            while(countmaxi>=k) countmaxi-=(nums[i++]==maxi);
            cnt+=i;
        }
        return cnt;
    }
};