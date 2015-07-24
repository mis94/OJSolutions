#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    long long n, num = 0 ;
    cin >> n ;
    set<int> allPrev ;
    while(1)
    {
        long long x = 0 ;
        while(n>0)
        {
            x += (n%10)*(n%10) ;
            n /= 10 ;
        }
        if(x==1)
        {
            cout << ++num ;
            return 0 ;
        }else if(allPrev.count(x)!=0)
        {
            cout << -1 ;
            return 0 ;
        }
        allPrev.insert(x) ;
        num++ ;
        n = x ;
    }
    return 0;
}
