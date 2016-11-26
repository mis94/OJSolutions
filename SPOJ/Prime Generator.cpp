#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
using namespace std;

bool isPrime(int num)
{
    for(int i=3;(i*i)<=num;i++) /* This is an algorithm to get all divisors or know if a number is prime or not in a */
    {                           /* complexity of O(sqrt(N)) instead of O(N) */
        if(num%i==0)
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
        int n , m ;
        cin >> m >> n ;
        if(m==1&&n==1)
        {
            cout << endl << endl ;
            continue ;
        }
        if((m==1&&n==2)||(m==2&&n==2))
        {
            cout << 2 << endl << endl ;
            continue ;
        }
        int i ;
        if(m%2==0)
            i = m+1 ;
        else
            i = m ;
        if(m<=2)
        {
            cout << 2 << endl ;
            i = 3 ;
        }
        for(i;i<=n;i+=2)
        {
            if(isPrime(i))
                cout << i << endl ;
        }
        cout << endl ;
    }

    return 0;
}
