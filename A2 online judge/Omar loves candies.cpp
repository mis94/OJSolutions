#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
using namespace std;
int pptr[1001][1001] ;// The utility of making arrays global as that in array made as global is stored in memory in a part called
// data segment and this is much bigger than the stack and any thing inside it is initialized with 0
// any thing else (containers) which is made as local including functions as main is stored inside the stack which is less in size
// than the data segment....Generally in problem solving using global arrays with size equal or greater than the max. limit
// of the problem is better and saves time more than allocation and usage of pointers to make dynamic arrays and loops and so...
int main()
{
    ios_base::sync_with_stdio(0) ;
    int t , n , m , temp = 0 , maxi = -2001 ;
    cin >> t ;
    while(t--)
    {
        cin >> n >> m ;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                cin >> pptr[i][j] ;
            for(int u=i;u>=0;u--)
            {
                for(int j=m-1,k=u;j>=0;)
                {
                    if(u<i)
                    {
                        if(k==i)
                        {
                            temp += pptr[k][j] ;
                            maxi = max(maxi,temp) ;
                            j-- ;
                            k = u ;
                        }else
                        {
                            temp += pptr[k][j] ;
                            k++ ;
                        }
                    }else
                    {
                        temp += pptr[k][j] ;
                        j-- ;
                        maxi = max(temp,maxi) ;
                    }
                }
                temp = 0 ;
            }
        }
        cout << maxi << endl ;
        maxi = -2001 ;
    }
    return 0;
}
