class Graph {
public:
  vector<vector<vector<int>>> graph;
  int n;
  Graph(int n, vector<vector<int>>& edges) {
    this->n = n;
    graph.resize(n);
    for (auto e: edges) {
      graph[e[0]].push_back({e[1], e[2]});
    }
  }
  
  void addEdge(vector<int> e) {
    graph[e[0]].push_back({e[1], e[2]});
  }

  int shortestPath(int from, int to) {
    vector<int> dist(n, INT_MAX);
    vector<bool> visited(n, false);
    priority_queue<
      pair<int, int>,
      vector<pair<int, int>>,
      greater<pair<int, int>>> pq;

    dist[from] = 0;
    pq.push({0, from});

    while (!pq.empty()) {
      auto at = pq.top().second;
      auto di = pq.top().first;
      pq.pop();

      if (at == to) {
        break;
      }

      visited[at] = true;

      for (auto e: graph[at]) {
        int to = e[0], weight = e[1];

        if (visited[to]) continue;

        int new_dist = di + weight;

        if (dist[to] > new_dist) {
          dist[to] = new_dist;
          pq.push({new_dist, to});
        }
      }
    }

    return dist[to] == INT_MAX ? -1 : dist[to];
  }
};

/**
 * Your Graph object will be instantiated and called as such:
 * Graph* obj = new Graph(n, edges);
 * obj->addEdge(edge);
 * int param_2 = obj->shortestPath(node1,node2);
 */