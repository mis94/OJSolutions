#include <iostream>
#include <cstdlib>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    int t ;
    cin >> t ;
    while(t--)
    {
        string str ;
        cin >> str ;
        char name[] = {'n','a','d','i','a'} ;
        int s = 0 ;
        for(int i=0;i<5;i++)
        {
            if(s>=str.size())
            {
                cout << "NO" << endl ;
                goto next ;
            }
            for(int j=s;j<str.size();j++)
            {
                if(str[j]==name[i])
                {
                    s = j+1 ;
                    break ;
                }else if(j==str.size()-1)
                {
                    cout << "NO" << endl ;
                    goto next ;
                }
            }
            if(i==4)
                cout << "YES" << endl ;
        }
        next:;
    }
    return 0;
}
