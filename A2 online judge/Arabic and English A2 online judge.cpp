#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    int t , n , x = 0 ;
    bool b = 0 ;
    cin >> t ;
    vector<string> vect ;
    while(t--)
    {
        cin >> n ;
        vect.resize(n) ;
        for(int i=0;i<n;i++)
        {
            cin >> vect[i] ;
            if(vect[i][0]>='a')
            {
                b = 1 ;
                x = i ;
            }
        }
        if(b)
        {
            for(int i=x+1;i<n;i++)
                cout << vect[i] << " " ;
            cout << vect[x] << " " ;
            for(int i=0;i<x;i++)
                cout << vect[i] << " " ;
            cout << endl ;
        }else
        {
            for(int i=0;i<n;i++)
                cout << vect[i] << " " ;
            cout << endl ;
        }
        b = 0 ;
    }
    return 0;
}
