#include <bits/stdc++.h>

using namespace std;
bool vis[20][20] ;
char mine[20][20] ;
set< vector< pair<int,int> > > container ;
int m1[] = {0 , 0 , -1 , 1};
int m2[] = {-1 , 1 , 0 , 0};
void countReachOct(int n, int r, int c, int cc, vector< pair<int,int> > vect)
{
    if(r<1||c<1)
        return ;
    else if(r>n||c>n)
        return ;
    if(mine[r][c]=='.'||vis[r][c]==1)
        return ;
    vis[r][c] = 1 ;
    vect.push_back(make_pair(r,c)) ;
    if(cc==8)
    {
        sort(vect.begin(),vect.end()) ;
        container.insert(vect) ;
        vis[r][c] = 0 ;
        return ;
    }
    /*countReachOct(n,r,c-1,cc+1,vect) ;
    countReachOct(n,r,c+1,cc+1,vect) ;
    countReachOct(n,r-1,c,cc+1,vect) ;
    countReachOct(n,r+1,c,cc+1,vect) ;*/
    for(int i = 0 ; i < 4 ; i++)
    {
        int tempr = r + m1[i];
        int tempc = c + m2[i];
        countReachOct(n,tempr,tempc,cc+1,vect);
    }
    vis[r][c] = 0 ;
}

/*void countOct(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            vector< pair<int,int> > vect ;
            countReachOct(n,i,j,1,vect) ;
        }
    }
}*/

int main()
{
    ios_base::sync_with_stdio(0) ;
    int t ;
    cin >> t ;
    while(t--)
    {
        int n ;
        cin >> n ;
        container.clear() ;
        for(int i=0;i<20;i++)
        {
            for(int j=0;j<20;j++)
                vis[i][j] = 0 ;
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
                cin >> mine[i][j] ;
        }
        //countOct(n) ;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                vector< pair<int,int> > vect ;
                countReachOct(n,i,j,1,vect) ;
            }
        }
        cout << container.size() << endl ;
    }
    return 0;
}
