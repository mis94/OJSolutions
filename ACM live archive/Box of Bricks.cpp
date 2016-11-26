#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    int cs = 1 ;
    while(1)
    {
        int n ;
        cin >> n ;
        if(n==0)
            break ;
        int arr[200] ;
        int s = 0, ans = 0 ;
        for(int i=0;i<n;i++)
        {
            cin >> arr[i] ;
            s += arr[i] ;
        }
        int x = (s/n) ;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>x)
                ans += (arr[i]-x) ;
        }
        cout << "Set #" << cs++ << endl << "The minimum number of moves is " << ans << "." << "\n\n" ;
    }
    return 0;
}
