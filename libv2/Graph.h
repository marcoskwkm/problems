/* A directed graph */
struct Graph {
    int V;
    vector<vector<int>> adj;
    
    Graph(int _V) : V(_V), E(0) {
        adj.resize(V);
    }

    void add_edge(int u, int v) {
        adj[u].push_back(v);
    }
};
