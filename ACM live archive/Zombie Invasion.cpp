#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    int n ;
    vector<int> villages(20) ;
    cin >> n ;
    while(n--)
    {
        for(int i=0;i<20;i++)
            cin >> villages[i] ;
        for(int i=19;i>0;i--)
        {
            if(villages[i]%2==0)
            {
                villages[i-1] += villages[i]/2 ;
                villages[i] = 0 ;
            }else
            {
                villages[i-1] += (villages[i]-1)/2 ;
                villages[i] = 1 ;
            }
        }
        for(int i=0;i<20;i++)
        {
            if(i==19)
                cout << villages[i] ;
            else
                cout << villages[i] << " " ;
        }
        cout << endl ;
    }
    return 0;
}
