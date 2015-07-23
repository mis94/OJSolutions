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
        long long pa , pb ;
        double g1 , g2 ;
        cin >> pa >> pb >> g1 >> g2 ;
        int years = 0 ;
        double x1 = g1/100.0 ;
        x1 *= pa ;
        double x2 = g2/100.0 ;
        x2 *= pb ;
        while(years<=100)
        {
            pa += x1 ;
            pb += x2 ;
            years++ ;
            if(pa>pb)
                break ;
            x1 = g1/100.0 ;
            x2 = g2/100.0 ;
            x1 *= pa ;
            x2 *= pb ;
        }
        if(years>100)
            cout << "Mais de 1 seculo." << endl ;
        else
            cout << years << " anos." << endl ;
    }
    return 0;
}
