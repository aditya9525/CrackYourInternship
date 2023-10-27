class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    
    void dfs(int node, vector<int>adj[], unordered_map<int, bool>&visited,vector<int>&ans){
        ans.push_back(node);
        visited[node]=true;
        
        for(auto i:adj[node]){
            if(!visited[i]){
                dfs(i, adj, visited, ans);
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        unordered_map<int, bool>visited;
        vector<int> ans;
        
        dfs(0, adj, visited, ans);

        return ans;
        
    }
};
