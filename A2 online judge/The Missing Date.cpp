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
        int y1 , m1 , y2 , m2 ;
        cin >> y1 >> m1 >> y2 >> m2 ;
        y1 += y2 ;
        m1 += m2 ;
        if(m1>12)
        {
            y1++ ;
            m1 -= 12 ;
        }
        cout << y1 << " " << m1 << endl ;
    }
    return 0;
}
