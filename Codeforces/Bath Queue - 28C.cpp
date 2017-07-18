#include <bits/stdc++.h>

using namespace std;
int n, m ;
int roomBasin[101] ;
double mem[101][101][101] ;
long long c[101][101] = {0} ;
void build_nck()
{
    for(int i=0;i<101;i++)
    {
        for(int j=0;j<101;j++)
        {
            c[i][j] = (j == 0) ? 1 : ( (i == 0) ? 0 : c[i-1][j-1]+c[i-1][j]);
        }
    }
}
double expSize(int room, int s, int maxi)
{
    if(room==m)
    {
        if(s==0)
            return maxi ;
        else
            return 0 ;
    }
    double &ret = mem[room][s][maxi] ;
    if(ret==ret)
        return ret ;
    ret = 0 ;
    double p = 1.0 ;
    for(int i=0;i<=s;i++)
    {
        int big = (i+roomBasin[room]-1)/roomBasin[room] ;
        ret += c[s][i]*p*expSize(room+1, s-i, max(big, maxi)) ;
        p /= m ;
    }
    return ret ;
}
int main()
{
    ios_base::sync_with_stdio(0) ;
    build_nck() ;
    cin >> n >> m ;
    for(int i=0;i<m;i++)
        cin >> roomBasin[i] ;
    memset(mem, -1, sizeof(mem)) ;
    cout << fixed << setprecision(9) << expSize(0,n,0) << endl ;
    //printf("%.10lf\n", expSize(0, n, 0) );

    return 0;
}