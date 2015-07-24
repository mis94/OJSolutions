#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0) ;
    ll n , t , b , cas = 1 ;
    while(cin>>n>>t>>b)
    {
        ll toggles = 0 ;
        t -= n*(t/n) ;
        for(ll i=1;i*i<=b;i++)
        {
            if(b%i==0)
            {
                if(i<=t)
                    toggles++ ;
                if(b/i<=t&&i*i!=b)
                    toggles++ ;
            }
        }
        if(toggles%2==0)
            cout << "Case " << cas << ": " << "off" << endl ;
        else
            cout << "Case " << cas << ": " << "on" << endl ;
        cas++ ;
    }
    return 0;
}
