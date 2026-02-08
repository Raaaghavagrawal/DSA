class Solution {
public:
    int countWays(vector<vector<int>>& ranges) {
        sort(ranges.begin(),ranges.end());
        int total=1,maxi=ranges[0][1];
        for(int i=1;i<ranges.size();i++){
            if(ranges[i][0] > maxi) total++;
            maxi=max(maxi,ranges[i][1]);
        }
        int ways=1,mod=1e9+7;
        while(total--) ways=(ways*2)%mod;
        return ways;
    }
};