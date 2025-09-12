class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        if(k<=1) return 0;
        int prod=1,res=0,l=0;
        for(int i=0;i<n;i++){
            prod*=nums[i];
            while(prod>=k){
                prod/=nums[l];
                l++;
            }
            res+=i-l+1;
        }
        return res;
    }
};