#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    int t ;
    cin >> t ;
    while(t--)
    {
        int n, p, x = 0 ;
        cin >> n >> p ;
        for(int i=1;i<n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                if(x<(2*n)+p)
                {
                    x++ ;
                    cout << i << " " << j << endl ;
                }
            }
        }
    }
    return 0;
}