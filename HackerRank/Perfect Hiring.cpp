#include <bits/stdc++.h>

using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0) ;
    ll n, p, x, maxi = -1, winner = 1 ;
    cin >> n >> p >> x ;
    for(int i=1;i<=n;i++)
    {
        ll a ;
        cin >> a ;
        if(a*p>maxi)
        {
            maxi = a*p ;
            winner = i ;
        }
        p -= x ;
    }
    cout << winner ;
    return 0;
}
