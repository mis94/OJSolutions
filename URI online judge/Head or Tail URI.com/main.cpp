#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    int n , x , mary = 0 , john = 0 ;
    while(cin>>n)
    {
        if(n==0)
            return 0 ;
        while(n--)
        {
            cin >> x ;
            if(x==0)
                mary++ ;
            else
                john++ ;
        }
        cout << "Mary won " << mary << " times and John won " << john << " times" << endl ;
        mary = 0 ;
        john = 0 ;
    }
    return 0;
}
