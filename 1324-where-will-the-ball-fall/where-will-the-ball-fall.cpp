class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<int>ans(n,-1);
        for(int i=0;i<n;i++){
            int x=0,y=i;
            while(x<m){
                if(y==0 && grid[x][y]==-1) break;
                if(y==n-1 && grid[x][y]==1) break;
                if((grid[x][y]==1 && grid[x][y+1]==-1) || grid[x][y]==-1 && grid[x][y-1]==1) break;
                if(grid[x][y]==1){
                    x++;
                    y++;
                }
                else{
                    x++;
                    y--;
                }
                if(x==m){
                    ans[i]=y;
                    break;
                }
            }
        }
        return ans;
    }
};