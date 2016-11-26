#include <bits/stdc++.h>
 
using namespace std;
 
bool vis[10004];
map<int, vector<int> > graph;
 
void rec(int i) {
	if (vis[i])
		return;
	vis[i] = 1;
	for (int j = 0; j < graph[i].size(); j++)
		rec(graph[i][j]);
}
 
int main() {
	ios_base::sync_with_stdio(0);
 
	int n, m;
	cin >> n >> m;
 
	if (m != n - 1) {
		cout << "NO";
		return 0;
	}
 
	while (m--) {
		int u, v;
		cin >> u >> v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
 
	rec(1);
	for (int i = 1; i <= n; i++) {
		if (!vis[i]) {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
}
 