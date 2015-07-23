#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <iomanip>
using namespace std;

int getSumOfAllDivisors(int num)
{
    int sum = 1 ;
    for(int i=2;(i*i)<=num;i++)
    {
        if(num%i==0)
        {
            sum += i ;
            if((num/i)!=i)
                sum += (num/i) ;
        }
    }
    return sum ;
}

int main()
{
    ios_base::sync_with_stdio(0) ;
    int n , x ;
    cin >> n ;
    while(n--)
    {
        cin >> x ;
        if(x==1)
        {
            cout << 1 << " nao eh perfeito" << endl ;
            continue ;
        }
        if(getSumOfAllDivisors(x)==x)
            cout << x << " eh perfeito" << endl ;
        else
            cout << x << " nao eh perfeito" << endl ;
    }
    return 0;
}
