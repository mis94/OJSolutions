#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    int t , n , m , a ;
    cin >> t ;
    while(t--)
    {
        cin >> n >> m ;
        vector< pair<int,int> > vect ;
        vect.resize(n) ;
        for(int i=0;i<n;i++)
        {
            cin >> a ;
            pair<int,int> foo(i+1,a) ;
            vect[i] = foo ;
        }
        for(int i=0;;i++)
        {
            if(vect.size()==1)
            {
                cout << vect[0].first << endl ;
                break ;
            }
            if(vect[i].second<=m)
            {
                vect.erase(vect.begin()+i) ;
                i = -1 ;
            }else
            {
                vect[i].second -= m ;
                vect.push_back(vect[i]) ;
                vect.erase(vect.begin()+i) ;
                i = -1 ;
            }
        }
    }
    return 0;
}