class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size(),repeat=0,missing=0;
        vector<int>v;
        map<int,int>mpp;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++) v.push_back(grid[i][j]);
        }
        for(auto i:v) mpp[i]++;
        for(int i=1;i<=n*n;i++){
            if(mpp[i]==2) repeat=i;
            if(mpp[i]==0) missing=i;
        }
        return {repeat,missing};
    }
};