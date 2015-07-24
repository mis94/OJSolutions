#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    int t , n1 , n2 , diff = 1000000 ;
    cin >> t ;
    while(t--)
    {
        cin >> n1 ;
        int* ptr = new int[n1] ;
        for(int i=0;i<n1;i++)
            cin >> ptr[i] ;
        cin >> n2 ;
        int* ptr2 = new int[n2] ;
        for(int i=0;i<n2;i++)
            cin >> ptr2[i] ;
        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<n2;j++)
            {
                if(abs(ptr[i]-ptr2[j])<diff)
                    diff = abs(ptr[i]-ptr2[j]) ;
            }
        }
        cout << diff << endl ;
        diff = 1000000 ;
    }
    return 0;
}
