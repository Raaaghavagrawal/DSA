class Solution {
public:
    int findMin(vector<int>& nums) {
        int left=0,right=nums.size()-1;
        while(left<right){
            int mid=(right+left)/2;
            int m=nums[mid];
            if(m>nums[right]) left=mid+1;
            else if(nums[left]>m) right=mid;
            else --right;
        }
        return nums[left];
    }
};