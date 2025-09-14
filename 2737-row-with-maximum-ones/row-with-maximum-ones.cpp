class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int>result;
        int n=mat.size(),m=mat[0].size();
        int count=INT_MIN,minrow=INT_MAX;
        for(int i=0;i<n;i++){
            int onescount=0;
            for(int j=0;j<m;j++){
                if(mat[i][j]==1) onescount++;
            }
            if(count<onescount){
                minrow=i;
                count=onescount;
            }
        }
        return {minrow,count};
    }
};