#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <vector>
using namespace std;

bool isPrime(int x)
{
    for(int j=x-1;j>1;j--)
    {
        if(x%j==0)
            return false ;
    }
    return true ;
}

int multOfDigits(int x)
{
    int temp = 1 ;
    while(x>0)
    {
        temp *= x%10 ;
        x /= 10 ;
    }
    return temp ;
}

int main()
{
    ios_base::sync_with_stdio(0) ;
    int t ;
    cin >> t ;
    vector<int> primes ;
    primes.push_back(2) ;
    for(int i=3;;i++)
    {
        if(isPrime(i))
            primes.push_back(i) ;
        if(primes.size()==100)
            break ;
    }
    primes.resize(100) ;
    for(int i=0;i<primes.size();i++)
        primes[i] = multOfDigits(primes[i]) ;
    vector<int> cumulative ;
    cumulative = primes ;
    for(int i=1;i<primes.size();i++)
    {
        for(int j=i-1;j>=0;j--)
            cumulative[i] += primes[j] ;
    }
    while(t--)
    {
        int n ;
        cin >> n ;
        cout << cumulative[n-1] << endl ;
    }
    return 0;
}
