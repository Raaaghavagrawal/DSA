class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int x1=0,x2=0;
        for(int x:nums1) x1^=x;
        for(int x:nums2) x2^=x;
        int res=0;
        if(nums1.size()%2!=0) res^=x2;
        if(nums2.size()%2!=0) res^=x1;
        return res;
    }
};