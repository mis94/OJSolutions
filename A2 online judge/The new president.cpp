#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <vector>
using namespace std;
double eps = 1e-6 ;
int main()
{
    ios_base::sync_with_stdio(0) ;
    vector< vector<int> > comp ;
    int t , c , v , p , c1 , c2 , maxi = 0 ;
    bool x = 1 ;
    cin >> t ;
    while(t--)
    {
        cin >> c >> v ;
        comp.resize(c) ;
        for(int i=0;i<c;i++)
            comp[i].resize(c) ;
        for(int i=0;i<v;i++)
        {
            for(int j=0;j<c;j++)
            {
                cin >> p ;
                comp[j][p-1]++ ;
            }
        }
        for(int i=0;i<c;i++)
        {
            if(i==0)
            {
                for(int j=0;j<c;j++)
                {
                    if(comp[i][j]>maxi)
                    {
                        maxi = comp[i][j] ;
                        x = 1 ;
                        c1 = j+1 ;
                    }else if(comp[i][j]==maxi)
                    {
                        x = 0 ;
                        c2 = j+1 ;
                    }
                }
            }else
            {
                for(int j=0;j<c;j++)
                {
                    if(comp[i][j]>maxi&&j==c1-1||j==c2-1)
                    {
                        maxi = comp[i][j] ;
                        x = 1 ;
                        c1 = j+1 ;
                    }else if(comp[i][j]==maxi&&j==c1-1||j==c2-1)
                    {
                        x = 0 ;
                        c2 = j+1 ;
                    }
                }
            }
            if(i==0&&x)
            {
                double tmp = maxi ;
                if((tmp/v)+eps>0.5)
                {
                    cout << c1 << " " << 1 << endl ;
                    break ;
                }else
                {
                    cout << c1 << " " << 2 << endl ;
                    break ;
                }
            }else if(x)
            {
                cout << c1 << " " << 2 << endl ;
                break ;
            }
            maxi = 0 ;
        }
        comp.clear() ;
        maxi = 0 ;
    }
    return 0;
}
