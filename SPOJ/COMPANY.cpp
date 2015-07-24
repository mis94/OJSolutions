#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
using namespace std;

int n , m ;
bool graph[1002][1002] ;
bool visited[1002] ;

void dfs(int curNode, int prevNode)
{
    for(int i=1;i<=n;i++)
    {
        if(graph[curNode][i]==1&&graph[prevNode][i]==1)
        {
            graph[prevNode][i] = 0 ;
            m -= 1 ;
        }
    }
    if(visited[curNode]==1)
        return ;
    visited[curNode] = 1 ;
    for(int i=1;i<=n;i++)
    {
        if(graph[curNode][i]==1)
            dfs(i,curNode) ;
    }
    return ;
}

int main()
{
    ios_base::sync_with_stdio(0) ;
    cin >> n >> m ;
    int a , b ;
    for(int i=0;i<m;i++)
    {
        cin >> a >> b ;
        graph[a][b] = 1 ;
    }
    dfs(1,0) ;
    cout << m << endl ;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(graph[i][j]==1)
                cout << i << " " << j << endl ;
        }
    }
    return 0;
}
