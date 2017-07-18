#include <bits/stdc++.h>

using namespace std;

long long GCD(long long a, long long b)
{
      long long r, i ;
      while(b!=0)
      {
         r = a % b ;
         a = b ;
         b = r ;
      }
      return a ;
}

int main()
{
    ios_base::sync_with_stdio(0) ;
    long long a, b, x, y ;
    cin >> a >> b >> x >> y ;
    long long gcd = GCD(x, y) ;
    x /= gcd ;
    y /= gcd ;
    if(x>a&&y>b)
    {
        cout << 0 << " " << 0 ;
        
        
        
        return 0 ;
    }
    long long num ;
    num = a/x ;
    if(num!=0&&num*y<=b)
    {
        cout << num*x << " " << num*y ;
        return 0 ;
    }

    num = b/y ;
    if(num!=0&&num*x<=a)
    {
        cout << num*x << " " << num*y ;
        return 0 ;
    }
    cout << 0 << " " << 0 ;

    return 0;
}