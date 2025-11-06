class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int oranges=0;
        int time=-1;
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2) q.push({i,j});
                if(grid[i][j]==1) oranges++;
            }
        }
        if(oranges==0) return 0;
        while(!q.empty()){
            int sz=q.size();
            time++;
            while(sz--){
                auto[i,j]=q.front();
                q.pop();
                if(i>0 && grid[i-1][j]==1){
                    grid[i-1][j]=2;
                    oranges--;
                    q.push({i-1,j});
                }
                if(i<n-1 && grid[i+1][j]==1){
                    grid[i+1][j]=2;
                    oranges--;
                    q.push({i+1,j});
                }
                if(j>0 && grid[i][j-1]==1){
                    grid[i][j-1]=2;
                    oranges--;
                    q.push({i,j-1});
                }
                if(j<m-1 && grid[i][j+1]==1){
                    grid[i][j+1]=2;
                    oranges--;
                    q.push({i,j+1});
                }
            }
        }
        return oranges==0?time:-1;
    }
};