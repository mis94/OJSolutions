#include <bits/stdc++.h>

using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    ll maxDia = -1;
    ll n;
    cin >> n;
    map< pair<ll, ll>, pair<ll, ll> > mym;
    ll s1, s2;
    for(int i=1;i<=n;i++)
    {
        ll a, b, c;
        cin >> a >> b >> c;

        ll mini = min(min(a, b), c);
        if(mini>maxDia)
        {
            maxDia = mini;
            s1 = i;
            s2 = -1;
        }

        pair<ll, ll> p1 = make_pair(a, b);
        pair<ll, ll> p11 = make_pair(b, a);
        pair<ll, ll> p2 = make_pair(b, c);
        pair<ll, ll> p22 = make_pair(c, b);
        pair<ll, ll> p3 = make_pair(a, c);
        pair<ll, ll> p33 = make_pair(c, a);

        if(mym.count(p1)!=0&&mym[p1].first!=i)
        {
            mini = min(min(p1.first, p1.second), mym[p1].second+c);
            if(mini>maxDia)
            {
                maxDia = mini;
                s1 = i;
                s2 = mym[p1].first;
            }
            if(c>mym[p1].second)
                mym[p1] = make_pair(i, c);
        }else
            mym[p1] = make_pair(i, c);

        if(mym.count(p11)!=0&&mym[p11].first!=i)
        {
            mini = min(min(p11.first, p11.second), mym[p11].second+c);
            if(mini>maxDia)
            {
                maxDia = mini;
                s1 = i;
                s2 = mym[p11].first;
            }
            if(c>mym[p11].second)
                mym[p11] = make_pair(i, c);
        }else
            mym[p11] = make_pair(i, c);

        if(mym.count(p2)!=0&&mym[p2].first!=i)
        {
            mini = min(min(p2.first, p2.second), mym[p2].second+a);
            if(mini>maxDia)
            {
                maxDia = mini;
                s1 = i;
                s2 = mym[p2].first;
            }
            if(a>mym[p2].second)
                mym[p2] = make_pair(i, a);
        }else
            mym[p2] = make_pair(i, a);

        if(mym.count(p22)!=0&&mym[p22].first!=i)
        {
            mini = min(min(p22.first, p22.second), mym[p22].second+a);
            if(mini>maxDia)
            {
                maxDia = mini;
                s1 = i;
                s2 = mym[p22].first;
            }
            if(a>mym[p22].second)
                mym[p22] = make_pair(i, a);
        }else
            mym[p22] = make_pair(i, a);

        if(mym.count(p3)!=0&&mym[p3].first!=i)
        {
            mini = min(min(p3.first, p3.second), mym[p3].second+b);
            if(mini>maxDia)
            {
                maxDia = mini;
                s1 = i;
                s2 = mym[p3].first;
            }
            if(b>mym[p3].second)
                mym[p3] = make_pair(i, b);
        }else
            mym[p3] = make_pair(i, b);

        if(mym.count(p33)!=0&&mym[p33].first!=i)
        {
            mini = min(min(p33.first, p33.second), mym[p33].second+b);
            if(mini>maxDia)
            {
                maxDia = mini;
                s1 = i;
                s2 = mym[p33].first;
            }
            if(b>mym[p33].second)
                mym[p33] = make_pair(i, b);
        }else
            mym[p33] = make_pair(i, b);
    }

    if(s2==-1)
        cout << 1 << endl << s1;
    else
        cout << 2 << endl << s1 << " " << s2;

    return 0;
}