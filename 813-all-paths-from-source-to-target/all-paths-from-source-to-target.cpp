class Solution {
public:
    void dfs(vector<vector<int>>&graph,vector<vector<int>>&res,vector<int>&temp,int target,int curr=0){
        temp.push_back(curr);
        if(curr==target) res.push_back(temp);
        else{
            for(int node:graph[curr]) dfs(graph,res,temp,target,node);
        }
        temp.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int target=graph.size()-1;
        vector<vector<int>>res;
        vector<int>temp;
        dfs(graph,res,temp,target);
        return res;
    }
};