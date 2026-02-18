class Solution {
public:
    int countElements(vector<int>& nums) {
        int l=INT_MAX,lowCount=0;
        int h=INT_MIN,highCount=0;
        for(int n:nums){
            if(n<l){
                l=n;
                lowCount=0;
            }
            if(n>h){
                h=n;
                highCount=0;
            }
            if(n==l) lowCount++;
            if(n==h) highCount++;
        }
        return nums.size()-lowCount-(l==h ? 0:highCount);
    }
};