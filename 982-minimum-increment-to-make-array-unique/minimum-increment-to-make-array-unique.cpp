class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int result=0;
        for(size_t i=1;i<nums.size();i++){
            if(nums[i]<=nums[i-1]){
                int neww=nums[i-1]+1;
                result+=neww-nums[i];
                nums[i]=neww;
            }
        }
        return result;
    }
};