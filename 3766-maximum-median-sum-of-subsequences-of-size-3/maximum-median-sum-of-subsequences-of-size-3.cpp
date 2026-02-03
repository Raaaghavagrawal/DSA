class Solution {
public:
    long long maximumMedianSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int i=0,j=n-2;
        long long res=0;
        while(i<j){
            res+=nums[j];
            i++;
            j=j-2;
        }
        return res;
    }
};