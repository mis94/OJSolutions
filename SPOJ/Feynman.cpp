#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    long long n ;
    while(cin >> n)
    {
        if(n==0)
            break ;
        long long squares = 0 ;
        for(int i=n;i>=1;i--)
            squares += (i*i) ;
        cout << squares << endl ;
    }
    return 0;
}
