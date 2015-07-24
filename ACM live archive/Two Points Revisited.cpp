#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    long long t , f = 1 ;
    cin >> t ;
    while(t--)
    {
        long long x1 , x2 , y1 , y2 ;
        cin >> x1 >> y1 >> x2 >> y2 ;
        if(y1==y2)
            cout << "0 0 0 1" ;
        else if(x1==x2)
            cout << "0 0 1 0" ;
        else
        {
            long long diffy = y2-y1 , diffx = x2-x1 ;
            long long xx1 = 0 , yy1 = 0 , xx2 = -diffy , yy2 = diffx ;
            xx1 += abs(min(diffy,diffx)) ;
            yy1 += abs(min(diffy,diffx)) ;
            xx2 += abs(min(diffy,diffx)) ;
            yy2 += abs(min(diffy,diffx)) ;
            long long mn1 = min(xx1,xx2) , mn2 = min(yy1,yy2) ;
            xx1 -= mn1 ;
            yy1 -= mn2 ;
            xx2 -= mn1 ;
            yy2 -= mn2 ;
            cout << "Case " << f++ << ": " << xx1 << " " << yy1 << " " << xx2 << " " << yy2 ;
        }
        cout << endl ;
    }
    return 0;
}
