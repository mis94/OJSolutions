#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
using namespace std;
#define ll long long
ll arr[100001] ;
int main()
{
    ios_base::sync_with_stdio(0) ;
    int t ;
    cin >> t ;
    while(t--)
    {
        ll currSum = 0 , n , mini , sum = 0 ;
        cin >> n ;
        for(int i=0;i<n;i++)
        {
            cin >> arr[i] ;
            sum += arr[i] ;
        }
        mini = sum - max(arr[0],arr[n-1]) ;
        for(int i=0;i<n-1;i++)
        {
            currSum += arr[i] ;
            ll tmp = currSum ;
            tmp += sum - arr[i+1] ;
            if(tmp<mini)
                mini = tmp ;
        }
        currSum = 0 ;
        for(int i=n-1;i>0;i--)
        {
            currSum += arr[i] ;
            ll tmp = currSum ;
            tmp += sum - arr[i-1] ;
            if(tmp<mini)
                mini = tmp ;
        }
        cout << mini << endl ;
    }
    return 0;
}
