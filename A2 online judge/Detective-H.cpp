#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <iomanip>
using namespace std;
double eps = 1e-6 ;
int main()
{
    ios_base::sync_with_stdio(0) ;
    int t ;
    cin >> t ;
    while(t--)
    {
        double s , n , k , m ;
        cin >> s >> n >> k >> m ;
        if((m/k)>(n/s))
            cout << -1 << endl ;
        else
            cout << fixed << setprecision(5) << ((n/s)+eps)-((m/k)+eps) << endl ;
    }
    return 0;
}
