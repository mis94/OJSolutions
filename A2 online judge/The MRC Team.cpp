#include <iostream>
#include <cstdlib>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    int t ;
    cin >> t ;
    while(t--)
    {
        int n ;
        cin >> n ;
        if(n==0)
        {
            cout << 1 << endl ;
            continue ;
        }
        int ans = 0 ;
        while(n>0)
        {
            ans++ ;
            n /= 10 ;
        }
        cout << ans << endl ;
    }

    return 0;
}
