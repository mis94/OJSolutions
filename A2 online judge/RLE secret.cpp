#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    int t , x = 1 ;
    string s , ans , numx ;
    stringstream ss ;
    cin >> t ;
    while(t--)
    {
        cin >> s ;
        for(int i=0;i<s.size();i++)
        {
            if(i==s.size()-1)
            {
                ans += s[i] ;
                ss << x ;
                ss >> numx ;
                ans += numx ;
                ss.clear() ;
                numx.clear() ;
                cout << ans << "\n" ;
                x = 1 ;
                break ;
            }else if(s[i+1]==s[i])
                x++ ;
            else
            {
                ans += s[i] ;
                ss << x ;
                ss >> numx ;
                ans += numx ;
                ss.clear() ;
                numx.clear() ;
                x = 1 ;
            }
        }
        ans.clear() ;
    }
    return 0;
}
