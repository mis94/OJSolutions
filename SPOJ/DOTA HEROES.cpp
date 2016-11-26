#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0) ;
    int t ;
    cin >> t ;
    while(t--)
    {
        int n, m, d ;
        cin >> n >> m >> d ;
        map<int, int> mym ;
        for(int i=0;i<n;i++)
        {
            int h ;
            cin >> h ;
            mym[h]++ ;
        }
        bool b = 1 ;
        for(int i=0;i<m;i++)
        {
            map<int, int>::reverse_iterator rit = mym.rbegin() ;
            if(rit->first<=d)
            {
                cout << "NO" ;
                b = 0 ;
                break ;
            }else
            {
                rit->second-- ;
                mym[rit->first-d]++ ;
                int x = rit->first ;
                if(rit->second==0)
                    mym.erase(x) ;
            }
        }
        if(b)
            cout << "YES" ;
        if(t)
            cout << "\n" ;
    }
 
    return 0;
}
 