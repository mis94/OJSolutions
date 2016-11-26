#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    long long t , x ;
    cin >> t ;
    while(t--)
    {
        cin >> x ;
        for(long long i=1;;i++)
        {
            if((x*i)%7==0)
            {
                cout << x*i << endl ;
                break ;
            }
        }
    }
    return 0;
}