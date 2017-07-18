#include <bits/stdc++.h>

using namespace std;

double diff(double d1, double d2, double d3, double d4)
{
    double ret = d3/d4 ;
    ret -= d1/d2 ;
    if(ret<0)
        ret *= -1 ;
    return ret ;
}

double searchNum(double deno, double x, double y)
{
    int low = 0, high = 1000000000 ;
    int mid ;
    while(low<=high)
    {
        mid = (low+high)/2 ;
        if(diff(mid-1, deno, x, y)<diff(mid, deno, x, y))
            high = mid-1 ;
        else if(diff(mid+1, deno, x, y)<diff(mid, deno, x, y))
            low = mid+1 ;
        else
            return mid ;
    }
}

int main()
{
    ios_base::sync_with_stdio(0) ;
    int x, y, n ;
    cin >> x >> y >> n ;
    double curr = 1e9, ans1, ans2 ;
    for(int i=1;i<=n;i++)
    {
        double d = searchNum(i, x, y) ;
        if(diff(d, i, x, y)<curr)
        {
            curr = diff(d, i, x, y) ;
            ans1 = d ;
            ans2 = i ;
        }
    }
    int a = ans1, b = ans2 ;
    int gcd = __gcd(a, b) ;
    a /= gcd ;
    b /= gcd ;
    cout << a << "/" << b ;
    return 0;
}