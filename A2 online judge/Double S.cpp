#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
using namespace std;
int arr[11] ;
int main()
{
    ios_base::sync_with_stdio(0) ;
    int t , n , k ;
    cin >> t ;
    while(t--)
    {
        bool isAvailable = 0 ;
        cin >> k >> n ;
        for(int i=0;i<n;i++)
            cin >> arr[i] ;
        for(int i=1;i<(1<<n);i++)
        {
            int sum = 0 ;
            for(int j=0;j<n;j++)
            {
                if((i&(1<<j))!=0)
                    sum += arr[j] ;
            }
            if(sum==k)
            {
                cout << "YES" << endl ;
                isAvailable = 1 ;
                break ;
            }
        }
        if(!isAvailable)
            cout << "NO" << endl ;
    }
    return 0;
}
