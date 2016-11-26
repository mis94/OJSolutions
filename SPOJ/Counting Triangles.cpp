#include <bits/stdc++.h>
 
using namespace std;
int main()
{
    long long t ;
    scanf("%lld", &t) ;
    while(t--)
    {
        long long n ;
        scanf("%lld", &n) ;
        printf("%lld", (n*(n+2)*(2*n+1))/8) ;
        if(t)
            printf("\n") ;
    }
 
    return 0;
}
 