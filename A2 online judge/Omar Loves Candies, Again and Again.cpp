#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <vector>
using namespace std;
typedef long long ll ; // This is similar to #define ll long long
int main()
{
    ios_base::sync_with_stdio(0) ;
    int t ;
    cin >> t ;
    while(t--)
    {
        ll n , c ;
        cin >> n >> c ;
        ll j = n ;
        vector< pair<ll,ll> > candies ;
        while(n--)
        {
            ll a , b ;
            cin >> a >> b ;
            candies.push_back(pair<ll,ll>(a,b)) ;
        }
        int maxi = 0 , fact = 1 ;
        for(int i=2;i<=j;i++)
            fact *= i ;
        while(fact--)
        {
            ll current = c ;
            int tmp = 0 ;
            for(int i=0;i<candies.size();i++)
            {
                if(current<candies[i].first)
                    break ;
                current -= candies[i].first ;
                current += candies[i].second ;
                tmp++ ;
            }
            if(tmp>maxi)
                maxi = tmp ;
            next_permutation(candies.begin(),candies.end()) ;
        }
        cout << maxi << endl ;
    }
    return 0;
}
