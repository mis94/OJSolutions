#include <bits/stdc++.h>

using namespace std;
int mem[1005][1005] ;
int w, n ;
int diffPaths(int r, int c)
{
    if(r<1||r>w)
        return 0 ;
    else if(c<1||c>n)
        return 0 ;
    if(r==w&&c==n)
        return mem[r][c] = 1 ;
    else if(mem[r][c]!=-1)
        return mem[r][c] ;
    return mem[r][c] = diffPaths(r,c+1)+diffPaths(r+1,c) ;
}

int main()
{
    ios_base::sync_with_stdio(0) ;
    int t ;
    cin >> t ;
    while(t--)
    {
        memset(mem,-1,sizeof(mem)) ;
        cin >> w >> n ;
        int x ;
        for(int i=0;i<w;i++)
        {
            cin >> x ;
            string str ;
            getline(cin,str) ;
            stringstream ss(str);
            int y ;
            while(ss>>y)
                mem[x][y] = 0 ;
        }
        mem[1][1] = -1 ;
        cout << diffPaths(1,1) << endl ;
        if(t)
            cout << endl ;
    }
    return 0;
}
