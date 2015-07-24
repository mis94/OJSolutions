#include <bits/stdc++.h>

using namespace std;
vector<int> price, weight ;
int mem[1005][35] ;

int maxVal(int i,int curr)
{
    if(i>=price.size())
        return 0 ;
    if(mem[i][curr]!=-1)
        return mem[i][curr] ;
    int ch1, ch2 = 0 ;
    ch1 = maxVal(i+1,curr) ;
    if(curr>=weight[i])
        ch2 = maxVal(i+1,curr-weight[i])+price[i] ;
    return mem[i][curr] = max(ch1,ch2) ;
}
int main()
{
    ios_base::sync_with_stdio(0) ;
    int t ;
    cin >> t ;
    while(t--)
    {
        int n ;
        cin >> n ;
        price.resize(n) ;
        weight.resize(n) ;
        for(int i=0;i<n;i++)
            cin >> price[i] >> weight[i] ;
        int g ;
        cin >> g ;
        vector<int> mxW(g) ;
        for(int i=0;i<g;i++)
            cin >> mxW[i] ;
        int ans = 0 ;
        for(int i=0;i<g;i++)
        {
            memset(mem,-1,sizeof(mem)) ;
            ans += maxVal(0,mxW[i]) ;
        }
        cout << ans << endl ;
    }

    return 0;
}
