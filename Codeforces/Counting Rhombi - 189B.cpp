#include <bits/stdc++.h>

using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    ll w, h;
    cin >> w >> h;
    ll ans = 0;
    for(ll i=1;i<w;i++)
    {
        for(ll j=0;j<=h-2;j++)
        {
            ll temp = (h-j)/2;
            ans += temp*min(i-0, w-i);
        }
    }
    cout << ans;
    return 0;
}