#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    long long t ;
    cin >> t ;
    while(t--)
    {
        long long n, sum = 0 ;
        cin >> n ;
        if(n==1)
        {
            cout << 0 << endl ;
            continue ;
        }
        for(int i=1;(i*i)<=n;i++)
        {
            if(n%i==0)
            {
                sum += i ;
                if(i!=1&&i!=n/i)
                    sum += (n/i) ;
            }
        }
        cout << sum << endl ;
    }

    return 0;
}
