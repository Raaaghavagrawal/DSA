class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left=0,right=nums.size()-1;
        vector<int>res(2,-1);
        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]<target) left=mid+1;
            else right=mid-1;
            if(nums[mid]==target) res[0]=mid;
        }
        left=0,right=nums.size()-1;
        while(left<=right){
            int mid = left+(right-left)/2;
            if(nums[mid]<=target) left=mid+1;
            else right=mid-1;
            if(nums[mid]==target) res[1]=mid;
        }
        return res;
    }
};