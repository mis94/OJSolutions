#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    int t ;
    cin >> t ;
    while(t--)
    {
        int x = 0 ;
        double n, d ;
        cin >> n >> d ;
        while(n--)
        {
            double v, f, c ;
            cin >> v >> f >> c ;
            if(d/v<=f/c)
                x++ ;
        }
        cout << x << endl ;
    }
    return 0;
}
