#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main()
{
    int n , v ;

    while(1)
    {
        cin >> n >> v ;
        bool x = 0 ;
        if(n==0&&v==0)
            break ;
        int y = v ;
        for(int i=0,k=0;i<=n;i+=v,k++)
        {
            if(i>n&&v==y)
            {
                x = 1 ;
                break ;
            }
            if(i==n)
            {
                x = 1 ;
                break ;
            }else if(k==v)
            {
                v-- ;
                k = 0 ;
            }
        }
        if(x)
            cout << "possivel" << endl ;
        else
            cout << "impossivel" << endl ;

        x = 0 ;
    }

    return 0;
}
