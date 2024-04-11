#include <bits/stdc++.h>
#include <list>
#include <queue>
#include <unordered_map>
using namespace std;
class graph {
public:
  unordered_map<int, list<int>> g;
  void addEdge(int u, int v, bool direction) {
    g[u].push_back(v);
    if (direction) {
      g[v].push_back(u);
    }
  }
  void printGraph() {
    for (auto i : g) {
      cout << "vertex: " << i.first << " coordinates: ";
      for (auto j : i.second) {
        cout << j << " ";
      }
      cout << endl;
    }
  }
};
void fillGraph(graph &g);
void bsfTriverse(graph &g, int startingNode, list<int> &answer) {
  // g.printGraph();
  queue<int> storedToBeTriversed;
  unordered_map<int, bool> storedIsVisited;
  storedIsVisited[startingNode] = true;
  storedToBeTriversed.push(startingNode);
  while (!storedToBeTriversed.empty()) {
    int currentVisitedNode = storedToBeTriversed.front();
    answer.push_back(currentVisitedNode);
    storedToBeTriversed.pop();
    storedIsVisited[currentVisitedNode] = true;
    for (auto i : g.g[currentVisitedNode]) {
      if (storedIsVisited.find(i) == storedIsVisited.end()) {
        storedToBeTriversed.push(i);
        storedIsVisited[i] = true;
      }
    }
  }
}
int main() {
  graph g;
  list<int> answer;
  fillGraph(g);
  bsfTriverse(g, 0, answer);
  for (auto i : answer) {
    cout << i << " ";
  }
  // g.printGraph();
}

void fillGraph(graph &g) {
  g.addEdge(0, 1, 0);
  g.addEdge(1, 2, 0);
  g.addEdge(2, 3, 0);
  g.addEdge(3, 4, 0);
  g.addEdge(4, 5, 0);
  g.addEdge(5, 6, 0);
  g.addEdge(6, 7, 0);
  g.addEdge(7, 8, 0);
  g.addEdge(8, 9, 0);
  g.addEdge(9, 0, 0);
}
