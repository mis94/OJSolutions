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
        int n , sum = 0 ;
        cin >> n ;
        int* ptr = new int[n] ;
        for(int i=0;i<n;i++)
        {
            cin >> ptr[i] ;
            sum += ptr[i] ;
        }
        int x = sum , moved = 0 ;
        x -= x%n ;
        for(int i=0;i<n;i++)
        {
            if(ptr[i]<(x/n))
                moved += (x/n)-ptr[i] ;
        }
        cout << sum%n << " " << moved << endl ;
    }
    return 0;
}
