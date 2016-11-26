#include <iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n , k , s , x = 1 ;
    cin >> n >> k >> s ;

    int total = k*s ;
    int* ptr ;
    ptr = new int[n] ;

    for(int i=0;i<n;i++)
        cin >> ptr[i] ;

    sort(ptr,ptr+n) ;

    int sum = 0 ;

    for(int i=n-1;i>=0;i--)
    {
        sum += ptr[i] ;
        if(sum>=total)
        {
            cout << x << endl ;
            return 0 ;
        }
        x++ ;
    }

    return 0;
}
