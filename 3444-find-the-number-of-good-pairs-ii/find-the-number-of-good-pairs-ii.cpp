class Solution {
public:
    long long numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int n=nums1.size();
        int m=nums2.size();
        map<long long,int>freq;
        for(int i=0;i<m;i++){
            freq[(long long)nums2[i]*k]++;
        }
        int maxi=*max_element(nums1.begin(),nums1.end());
        vector<long long>arr(maxi+1,0);
        for(auto it:freq){
            long long a=it.first;
            int b=it.second;
            for(long long i=a;i<=maxi;i+=a){
                arr[i]+=b;
            }
        }
        long long total=0;
        for(int i=0;i<n;i++){
            total+=arr[nums1[i]];
        }
        return total;
    }
};