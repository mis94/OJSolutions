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
        int n , x ;
        bool isambiguous = 0 ;
        cin >> n ;
        while(n--)
        {
            cin >> x ;
            if(x!=1&&x!=0)
                isambiguous = 1 ;
        }
        if(isambiguous)
            cout << "ambiguous" << endl ;
        else
            cout << "not ambiguous" << endl ;
    }
    return 0;
}
