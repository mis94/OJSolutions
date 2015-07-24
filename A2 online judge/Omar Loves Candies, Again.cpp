#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    int t ;
    cin >> t ;
    while(t--)
    {
        string store ;
        cin >> store ;
        int letters[26] ;
        for(int i=0;i<26;i++)
            letters[i] = 0 ;
        for(int i=0;i<store.size();i++)
            letters[(int)store[i]-97]++ ;
        char candy ;
        int maxi = 0 ;
        for(int i=0;i<26;i++)
        {
            if(letters[i]>maxi)
            {
                maxi = letters[i] ;
                candy = (char)i+97 ;
            }
        }
        cout << maxi << " " << candy << endl ;
    }
    return 0;
}
