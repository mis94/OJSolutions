#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    int n , x = 0 , y = 2 ;
    cin >> n ;
    x = n ;
    while(y<n)
    {
        for(int i=y;;i++)
        {
            if(i*y>n)
                break ;
            else if(i*y<=n)
                x++ ;
        }
        y++ ;
    }
    cout << x ;
    return 0;
}
