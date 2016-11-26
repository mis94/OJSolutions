#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    int arr[10] ;
    int t ;
    cin >> t ;
    while(t--)
    {
        for(int i=0;i<10;i++)
            cin >> arr[i] ;
        sort(arr,arr+10) ;
        cout << arr[1] << endl ;
    }
    return 0;
}