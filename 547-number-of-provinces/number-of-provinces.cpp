class Solution {
public:
    vector<int>v;
    int parent(int x){
        if(v[x]==-1) return x;
        return v[x]=parent(v[x]);
    }
    void un_ion(int a,int b){
        int pa=parent(a), pb=parent(b);
        if(pa==pb) return;
        v[pa]=pb;
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        v=vector<int>(n,-1);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j]) un_ion(i,j);
            }
        }
        int c=0;
        for(int i=0;i<n;i++){
            if(v[i]==-1) c++;
        }
        return c;
    }
};