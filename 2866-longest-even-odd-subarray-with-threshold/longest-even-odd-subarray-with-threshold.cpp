class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int n=nums.size(),res=0;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0 && nums[i]<=threshold){
                int count=1;
                while(++i < n && nums[i]%2 != nums[i-1] % 2 && nums[i]<=threshold) ++count;
                res=max(res,count);
                --i;
            }
        }
        return res;
    }
};