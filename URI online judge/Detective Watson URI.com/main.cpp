#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdlib>
using namespace std;

int main()
{
    int max1 = 0 , max2 = 0 ;
    int* ptr ;
    int n ;

    while(1)
    {
        cin >> n ;
        if(n==0)
            break ;

        ptr = new int[n] ;

        for(int i=0;i<n;i++)
            cin >> ptr[i] ;

        for(int i=0;i<n;i++)
        {
            if(ptr[i]>max1)
                max1 = ptr[i] ;
        }
        for(int i=0;i<n;i++)
        {
            if(ptr[i]>max2&&ptr[i]<max1)
                max2 = ptr[i] ;
        }
        for(int i=0;i<n;i++)
        {
            if(ptr[i]==max2)
            {
                cout << ++i << endl ;
                break ;
            }
        }
    }

    return 0;
}
