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
        int n , x , res = 0 ;
        cin >> n ;
        for(int i=0;i<n;i++)
        {
            cin >> x ;
            if(i==0)
                res = x ;
            else
            {
                res += x ;
                res -= 2 ;
            }
        }
        cout << res << endl ;
    }
    return 0;
}
