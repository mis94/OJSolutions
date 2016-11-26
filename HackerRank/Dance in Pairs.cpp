#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0) ;
    vector<ll> boys ;
    vector<ll> girls ;
    ll n, k, p = 0 ;
    cin >> n >> k ;
    girls.resize(n) ;
    boys.resize(n) ;
    for(int i=0;i<n;i++)
        cin >> boys[i] ;
    for(int i=0;i<n;i++)
        cin >> girls[i] ;
    sort(boys.begin(),boys.end()) ;
    sort(girls.begin(),girls.end()) ;
    for(int i=0,j=0;i<boys.size()&&j<girls.size();)
    {
        if(abs(boys[i]-girls[j])<=k)
        {
            p++ ;
            i++ ;
            j++ ;
        }else if(boys[i]<girls[j])
            i++ ;
        else
            j++ ;
    }
    cout << p ;
    return 0;
}
