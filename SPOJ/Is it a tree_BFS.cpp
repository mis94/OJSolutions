#include <bits/stdc++.h>
 
using namespace std;
 
bool vis[10004];
map<int, vector<int> > graph;
 
void checkTree() {
	queue<int> curr;
	curr.push(1);
	while (curr.size() > 0) {
		int sz = curr.size();
		while (sz--) {
			int node = curr.front();
			curr.pop();
			vis[node] = 1;
			for (int i = 0; i < graph[node].size(); i++) {
				if (!vis[graph[node][i]])
					curr.push(graph[node][i]);
			}
		}
	}
}
 
int main() {
	ios_base::sync_with_stdio(0);
 
	int n, m;
	cin >> n >> m;
 
	if (m != n - 1) {
		cout << "NO";
		return 0;
	}
	//cout << "kosomk" << endl;
	while (m--) {
		int u, v;
		cin >> u >> v;
		graph[u].push_back(v);
		graph[v].push_back(u);
		//cout << u << " " << v << endl;
	}
	//cout << "OK\n";
	checkTree();
	//cout << "OK\n";
	for (int i = 1; i <= n; i++) {
		if (!vis[i]) {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
}
 