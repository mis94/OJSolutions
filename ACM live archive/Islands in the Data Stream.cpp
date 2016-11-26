#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    int p , t ;
    cin >> p ;
    while(p--)
    {
        cin >> t ;
        int islands = 0 ;
        int arr[15] ;
        for(int i=0;i<15;i++)
            cin >> arr[i] ;
        for(int i=1;i<14;i++)
        {
            if(arr[i]>arr[i-1])
                islands++ ;
        }
        cout << t << " " << islands << endl ;
    }
    return 0;
}
