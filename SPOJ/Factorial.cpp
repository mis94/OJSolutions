#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    long long t ;
    cin >> t ;
    while(t--)
    {
        long long n , sum = 0 , div = 5 ;
        cin >> n ;
        while(1)
        {
            sum += n/div ;
            div *= 5 ;
            if((n/div)<1)
                break ;
        }
        cout << sum << endl ;
    }
    return 0;
}
