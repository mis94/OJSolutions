#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    int t , n ;
    string s1 , s2 ;
    cin >> t ;
    while(t--)
    {
        cin >> s1 >> s2 ;
        n = s1.size()+s2.size() ;
        for(int i=0;i<s1.size();i++)
        {
            for(int j=0;j<s2.size();j++)
            {
                if(s2[j]==s1[i])
                {
                    s1.erase(i,1) ;
                    s2.erase(j,1) ;
                    i = -1 ;
                    n -= 2 ;
                    break ;
                }
            }
        }
        cout << n << endl ;
    }
    return 0;
}
