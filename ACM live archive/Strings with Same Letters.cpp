#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <string>
using namespace std;
int la[26] ;
int lb[26] ;
int main()
{
    ios_base::sync_with_stdio(0) ;
    int t = 1 ;
    string a , b ;
    while(1)
    {
        cin >> a >> b ;
        for(int i=0;i<26;i++)
        {
            la[i] = 0 ;
            lb[i] = 0 ;
        }
        if(a=="END"&&b=="END")
            return 0 ;
        for(int i=0;i<a.size();i++)
            la[(int)a[i]-97]++ ;
        for(int i=0;i<b.size();i++)
            lb[(int)b[i]-97]++ ;
        bool isSame = 1 ;
        for(int i=0;i<26;i++)
        {
            if(lb[i]!=la[i])
            {
                isSame = 0 ;
                break ;
            }
        }
        if(isSame)
            cout << "Case " << t << ": " << "same" << endl ;
        else
            cout << "Case " << t << ": " << "different" << endl ;
        t++ ;
    }
    return 0;
}
