#include <iostream>

using namespace std;

int main()
{
    while(1)
    {
        int n ;
        cin >> n ;
        if(n==-1)
            break ;
        int arr[10001] ;
        long long sum = 0 ;
        for(int i=0;i<n;i++)
        {
            cin >> arr[i] ;
            sum += arr[i] ;
        }
        if(sum%n!=0)
            cout << -1 << endl ;
        else
        {
            int need = 0, x = sum/n ;
            for(int i=0;i<n;i++)
            {
                if(arr[i]<x)
                    need += x-arr[i] ;
            }
            cout << need << endl ;
        }
    }
    return 0;
}
