class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>vec=nums1;
        vec.insert(vec.end(),nums2.begin(),nums2.end());
        sort(vec.begin(),vec.end());
        float median;
        int n=vec.size();
        int a=n/2;
        if(n%2!=0) median=vec[a];
        else median = (vec[a-1]+vec[a])/2.0;
        return median;
    }
};