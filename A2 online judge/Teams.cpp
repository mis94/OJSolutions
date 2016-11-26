#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
using namespace std;

int GCD(int x,int y)
{
    if(x==y)
        return x ;
    else if(x>y)
        return GCD(x-y,y) ;
    else
        return GCD(x,y-x) ;
}

int main()
{
    ios_base::sync_with_stdio(0) ;
    int t , a , b ;
    cin >> t ;
    while(t--)
    {
        cin >> a >> b ;
        int ans = GCD(a,b) ;
        cout << ans << " " << (a/ans)*(b/ans) << endl ;
    }
    return 0;
}
