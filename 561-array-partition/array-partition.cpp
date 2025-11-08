class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mini=INT_MAX;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            mini=min(mini,nums[i]);
            if(i%2!=0){
                sum+=mini;
                mini=INT_MAX;
            }
        }
        return sum;
    }
};