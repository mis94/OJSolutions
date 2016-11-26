#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    int n , t = 1 ;
    while(cin>>n)
    {
        if(n<0)
            return 0 ;
        double x , y , m , numdivida = 0 , numdividb = 0 , sumofmasses = 0 ;
        while(n--)
        {
            cin >> x >> y >> m ;
            sumofmasses += m ;
            numdivida += (m*x) ;
            numdividb += (m*y) ;
        }
        cout << "Case " << t << ": " << fixed << setprecision(2) << numdivida/sumofmasses << " " << numdividb/sumofmasses << endl ;
        t++ ;
    }
    return 0;
}
