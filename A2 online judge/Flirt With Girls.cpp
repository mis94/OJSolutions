#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    int t ;
    cin >> t ;
    while(t--)
    {
        int n , r ;
        cin >> n >> r ;
        int ans = 0 ;
        while(n--)
        {
            int x , y ;
            cin >> x >> y ;
            float d = sqrt((x*x)+(y*y)) ;
            if(d<=r)
                ans++ ;
        }
        cout << ans << endl ;
    }
    return 0;
}
