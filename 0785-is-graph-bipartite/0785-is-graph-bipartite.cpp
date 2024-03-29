class Solution {
public:
    
    bool dfs(int i, int col, vector<vector<int>> &graph,int color[]){
        color[i] = col;
        
        for(auto it:graph[i]){
            if(color[it]==-1){
                if(dfs(it,!col,graph,color)==false) return false;
            }
            else if(color[it]==col) return false;
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        int color[n];
        for(int i=0;i<n;i++){
            color[i] = -1;
        }
        for(int i=0;i<n;i++){
            if(color[i]==-1)
            {
                if(dfs(i,0,graph,color)==false) return false;;
            }
            
            
        }
        
        return true;
    }
};