class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int length=nums.size();
        int answer=0;
        int sum=0;
        for(int i:nums){
            sum+=i;
            if(sum==0) answer++;
        }
        return answer;
    }
};