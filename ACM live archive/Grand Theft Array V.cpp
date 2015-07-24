#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
using namespace std;
int arr[100001] ;

int main()
{
    ios_base::sync_with_stdio(0) ;
    int n ;
    cin >> n ;
    for(int i=0;i<n;i++)
        cin >> arr[i] ;
    int p1 , p2 ;
    cin >> p1 >> p2 ;
    p1-- ;
    p2-- ;
    int middle = (p1+p2)/2 ;
    long long sco1 = 0 , sco2 = 0 ;
    if(p1!=p2)
    {
        if(p1<=middle)
        {
            for(int i=0;i<=middle;i++)
                sco1 += arr[i] ;
            for(int i=middle+1;i<n;i++)
                sco2 += arr[i] ;
            cout << sco1 << " " << sco2 << endl ;
        }else
        {
            for(int i=middle;i<n;i++)
                sco1 += arr[i] ;
            for(int i=0;i<middle;i++)
                sco2 += arr[i] ;
            if(abs(p1-p2)==1)
                cout << sco1-arr[middle] << " " << sco2+arr[middle] << endl ;
            else
                cout << sco1 << " " << sco2 << endl ;
        }
    }else
    {
        for(int i=p1+1;i<n;i++)
            sco1 += arr[i] ;
        for(int i=p1-1;i>=0;i--)
            sco2 += arr[i] ;
        cout << max(sco1,sco2)+arr[p1] << " " << min(sco1,sco2) << endl ;
    }
    return 0;
}
