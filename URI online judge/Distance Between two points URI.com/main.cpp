#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
    int x1 , y1 ;
    int x2 , y2 ;
    int D = 0 ;

    cin >> x1 >> y1 ;
    cin >> x2 >> y2 ;

    x2 -= x1 ;
    x2 *= x2 ;
    D += x2 ;

    y2 -= y1 ;
    y2 *= y2 ;
    D += y2 ;

    cout << fixed << setprecision(4) << sqrt(D) << endl ;

    return 0;
}
