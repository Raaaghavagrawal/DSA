class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        int left=0,res=0,cnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]%2!=0){
                k--;
                cnt=0;
            }
            while(k==0){
                if(nums[left]%2!=0) k++;
                cnt++;
                left++;
            }
            res += cnt;
        }
        return res;
    }
};