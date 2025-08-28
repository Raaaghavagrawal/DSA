class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>sums(k,0);
        sums[0]++;
        int cnt=0;
        int currsum=0;
        for(int i=0;i<n;i++){
            currsum = (currsum + nums[i]%k + k)%k;
            cnt+=sums[currsum];
            sums[currsum]++;
        }
        return cnt;
    }
};