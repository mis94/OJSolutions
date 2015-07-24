#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    int n , q , t , a , b ;
    cin >> n >> q ;
    int* ptr = new int[n] ;
    int* ptreven = new int[n+1] ;
    int* ptrodd = new int[n+1] ;
    ptreven[0] = 0 ;
    ptrodd[0] = 0 ;
    for(int i=0;i<n;i++)
    {
        cin >> ptr[i] ;
        if(ptr[i]%2==0)
        {
            ptreven[i+1] = ptreven[i]+1 ;
            ptrodd[i+1] = ptrodd[i] ;
        }else
        {
            ptreven[i+1] = ptreven[i] ;
            ptrodd[i+1] = ptrodd[i]+1 ;
        }
    }
    while(q--)
    {
        cin >> t >> a >> b ;
        if(t==1)
        {
            if(ptr[a-1]%2==0)
                cout << ptreven[b]-ptreven[a]+1 << "\n" ;
            else
                cout << ptreven[b]-ptreven[a] << "\n" ;
        }else
        {
            if(ptr[a-1]%2!=0)
                cout << ptrodd[b]-ptrodd[a]+1 << "\n" ;
            else
                cout << ptrodd[b]-ptrodd[a] << "\n" ;
        }
    }
    delete []ptr ;
    delete []ptreven ;
    delete []ptrodd ;
    return 0;
}
