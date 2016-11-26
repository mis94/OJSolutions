#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    int t ;
    cin >> t ;
    while(t--)
    {
        int n ;
        cin >> n ;
        int arr[11] ;
        for(int i=0;i<10;i++)
            cin >> arr[i] ;
        sort(arr,arr+10) ;
        cout << n << " " << arr[7] << endl ;
    }
    return 0;
}
