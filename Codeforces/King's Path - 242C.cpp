#include <bits/stdc++.h>

using namespace std;
#define ll long long
multimap< ll,pair<ll,ll> > allowed ;
bool inBound(int x, int y)
{
    multimap< ll, pair<ll,ll> >::iterator it, itlow, itup ;
    itlow = allowed.lower_bound(x) ;
    itup = allowed.upper_bound(x) ;
    for(it=itlow;it!=itup;it++)
    {
        if(y>=(*it).second.first&&y<=(*it).second.second)
            return true ;
    }
    return false ;
}

int main()
{
    ios_base::sync_with_stdio(0) ;
    set< pair<ll,ll> > vis ;
    ll x0, y0, x1, y1, n ;
    cin >> x0 >> y0 >> x1 >> y1 ;
    cin >> n ;
    while(n--)
    {
        ll r, a, b ;
        cin >> r >> a >> b ;
        allowed.insert(make_pair(r,make_pair(a,b))) ;
    }
    ll m = 0 ;
    queue< pair<ll,ll> > q ;
    q.push(make_pair(x0,y0)) ;
    while(!q.empty())
    {
        ll sz = q.size() ;
        while(sz--)
        {
            pair<ll,ll> p(q.front().first,q.front().second) ;
            q.pop() ;
            vis.insert(make_pair(p.first,p.second)) ;
            if(p==make_pair(x1,y1))
            {
                cout << m ;
                return 0 ;
            }
            if(inBound(p.first-1,p.second)&&vis.count(make_pair(p.first-1,p.second))==0)
            {
                q.push(make_pair(p.first-1,p.second)) ;
                vis.insert(make_pair(p.first-1,p.second)) ;
            }
            if(inBound(p.first-1,p.second-1)&&vis.count(make_pair(p.first-1,p.second-1))==0)
            {
                q.push(make_pair(p.first-1,p.second-1)) ;
                vis.insert(make_pair(p.first-1,p.second-1)) ;
            }
            if(inBound(p.first-1,p.second+1)&&vis.count(make_pair(p.first-1,p.second+1))==0)
            {
                q.push(make_pair(p.first-1,p.second+1)) ;
                vis.insert(make_pair(p.first-1,p.second+1)) ;
            }
            if(inBound(p.first+1,p.second)&&vis.count(make_pair(p.first+1,p.second))==0)
            {
                q.push(make_pair(p.first+1,p.second)) ;
                vis.insert(make_pair(p.first+1,p.second)) ;
            }
            if(inBound(p.first+1,p.second-1)&&vis.count(make_pair(p.first+1,p.second-1))==0)
            {
                q.push(make_pair(p.first+1,p.second-1)) ;
                vis.insert(make_pair(p.first+1,p.second-1)) ;
            }
            if(inBound(p.first+1,p.second+1)&&vis.count(make_pair(p.first+1,p.second+1))==0)
            {
                q.push(make_pair(p.first+1,p.second+1)) ;
                vis.insert(make_pair(p.first+1,p.second+1)) ;
            }
            if(inBound(p.first,p.second+1)&&vis.count(make_pair(p.first,p.second+1))==0)
            {
                q.push(make_pair(p.first,p.second+1)) ;
                vis.insert(make_pair(p.first,p.second+1)) ;
            }
            if(inBound(p.first,p.second-1)&&vis.count(make_pair(p.first,p.second-1))==0)
            {
                q.push(make_pair(p.first,p.second-1)) ;
                vis.insert(make_pair(p.first,p.second-1)) ;
            }
        }
        m++ ;
    }
    cout << -1 ;
    return 0;
}