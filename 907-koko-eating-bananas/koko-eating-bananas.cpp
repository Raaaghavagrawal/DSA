class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi=0;
        int low=1;
        int high = *max_element(piles.begin(),piles.end());
        while(low<=high){
            int mid=(low+high)/2;
            long long ans=0;
            for(int x:piles){
                ans+=(x+mid-1)/mid;
            }
            if(ans>h) low=mid+1;
            else high=mid-1;
        }
        return low;
    }
};