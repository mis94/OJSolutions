#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    long long n ;
    cin >> n ;
    if(n<=1)
    {
        cout << "TAK" ;
        return 0 ;
    }
    set<long long> allPrev ;
    while(1)
    {
        if(n==1)
        {
            cout << "TAK" ;
            return 0 ;
        }
        if(allPrev.count(n)!=0)
        {
            cout << "NIE" ;
            return 0 ;
        }
        allPrev.insert(n) ;
        if(n%2==0)
            n /= 2 ;
        else
            n = (3*n)+3 ;
    }
    return 0;
}
