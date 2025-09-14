class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int row=-1,col=-1;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j] > maxi){
                    maxi=mat[i][j];
                    row=i;
                    col=j;
                }
            }
        }
        return {row,col};
    }
};