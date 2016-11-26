#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>

using namespace std;

bool prime(int x)
{
    for(int i=2;(i*i)<=x;i++)
    {
        if(x%i==0)
            return false ;
    }
    return true ;
}

int main()
{
    ios_base::sync_with_stdio(0) ;
    int t ;
    cin >> t ;
    while(t--)
    {
        int s, e, ans = 0 ;
        cin >> s >> e ;
        for(int i=s;i<=e;i++)
        {
            if(i==1)
                continue ;
            if(prime(i))
            {
                int temp = i, sum = 0 ;
                while(temp>0)
                {
                    sum += temp%10 ;
                    temp /= 10 ;
                }
                if(prime(sum))
                    ans++ ;
            }
        }
        cout << ans << endl ;
    }
    return 0;
}
