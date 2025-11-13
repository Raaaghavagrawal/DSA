class Solution {
public:
    void dfs(int i,int j,vector<vector<bool>>&vis, vector<vector<char>>&grid){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size()) return;
        if(grid[i][j]=='0' || vis[i][j]) return;
        vis[i][j]=1;
        dfs(i-1,j,vis,grid);
        dfs(i+1,j,vis,grid);
        dfs(i,j-1,vis,grid);
        dfs(i,j+1,vis,grid);
    }
    int numIslands(vector<vector<char>>& grid) {
        int ans=0;
        vector<vector<bool>>vis(grid.size(),vector<bool>(grid[0].size(),0));
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1' && !vis[i][j]){
                    dfs(i,j,vis,grid);
                    ans++;
                }
            }
        }
        return ans;
    }
};