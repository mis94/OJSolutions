#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    int t , n ;
    cin >> t ;
    while(t--)
    {
        cin >> n ;
        for(int i=1;;i++)
        {
            n -= i ;
            if(n==0)
            {
                cout << "Yes" << endl ;
                break ;
            }else if(n<0)
            {
                cout << "No" << endl ;
                break ;
            }
        }
    }
    return 0;
}
