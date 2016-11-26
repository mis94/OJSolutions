#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    map<int,int> sticks ;
    map<int,int>::iterator it ;
    int t , a , n , ans = 0 ;
    cin >> t ;
    while(t--)
    {
        cin >> n ;
        for(int i=0;i<n;i++)
        {
            cin >> a ;
            if(sticks.count(a)==0)
                sticks.insert(pair<int,int>(a,1)) ;
            else
                sticks[a]++ ;
        }
        for(it=sticks.begin();it!=sticks.end();it++)
            ans += (it->second)/4 ;
        cout << ans << endl ;
        sticks.clear() ;
        ans = 0 ;
    }
    return 0;
}
