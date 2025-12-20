class Solution {
public:
    int minimumAddedInteger(vector<int>& nums1, vector<int>& nums2) {
        int mini=2e9;
        int n=nums1.size();
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                vector<int>nums3;
                for(int k=0;k<n;k++){
                    if(i!=k && j!=k) nums3.push_back(nums1[k]);
                }
                set<int>diff;
                for(int k=0;k<n-2;k++){
                    diff.insert(nums2[k]-nums3[k]);
                }
                if(diff.size()==1) mini=min(mini,nums2[0]-nums3[0]);
            }
        }
        return mini;
    }
};