#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    int t ;
    while(cin>>t)
    {
        if(t==0)
            return 0 ;
        int l , w , h , maxh = 0 , maxv = 0 ;
        while(t--)
        {
            cin >> l >> w >> h ;
            if(h>maxh)
            {
                maxh = h ;
                maxv = l*w*h ;
            }else if(h==maxh)
            {
                int tmpv = l*w*h ;
                if(tmpv>maxv)
                    maxv = tmpv ;
            }
        }
        cout << maxv << endl ;
    }
    return 0;
}
