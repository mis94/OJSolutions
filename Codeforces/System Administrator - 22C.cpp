#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    int n, m, v ;
    cin >> n >> m >> v ;
    if(m<n-1)
    {
        cout << -1 ;
        return 0 ;
    }
    vector< pair<int, int> > vect ;
    for(int i=1;i<=n;i++)
    {
        if(i==v)
            continue ;
        vect.push_back(make_pair(min(i, v), max(i, v))) ;
        m-- ;
    }
    if(m==0)
    {
        for(int i=0;i<vect.size();i++)
            cout << vect[i].first << " " << vect[i].second << endl ;
        return 0 ;
    }
    int isolated = n ;
    if(v==n)
        isolated = n-1 ;
    for(int i=1;i<isolated;i++)
    {
        if(i==v)
            continue ;
        for(int j=i+1;j<isolated;j++)
        {
            if(j==v)
                continue ;
            if(m==0)
            {
                for(int i=0;i<vect.size();i++)
                    cout << vect[i].first << " " << vect[i].second << endl ;
                return 0 ;
            }
            vect.push_back(make_pair(i, j)) ;
            m-- ;
        }
    }
    if(m!=0)
        cout << -1 ;
    else
    {
        for(int i=0;i<vect.size();i++)
            cout << vect[i].first << " " << vect[i].second << endl ;
        return 0 ;
    }
    return 0;
}