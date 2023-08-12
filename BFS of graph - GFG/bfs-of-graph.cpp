//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> ans; 
    
    void bfs(int node, int V, vector<int> &vis, vector<int> adj[]){
        queue<int> q;
        q.push(node);
        vis[node] = 1;
        while(!q.empty()){
            int x = q.front();
            q.pop();
            ans.push_back(x);
            for(auto &child:adj[x]){
                if(vis[child]==0){
                    q.push(child);
                    vis[child] = 1;
                }
            }
                
            }
        }
        
    
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> vis(V);
        
        bfs(0,V, vis, adj); 
        return ans; 
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends