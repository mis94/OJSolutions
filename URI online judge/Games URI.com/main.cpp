#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    int t , n , x = 0 ;
    cin >> t ;
    vector<string> original ;
    vector<string> sorted ;
    string game ;

    while(t--)
    {
        cin >> n ;
        original.resize(n) ;
        sorted.resize(n) ;

        while(n--)
        {
            getline(cin,game) ;
            original.push_back(game) ;
            sorted.push_back(game) ;
        }

        sort(sorted.begin(),sorted.end()) ;

        for(int i=0;i<sorted.size();i++)
        {
            if(original[i]!=sorted[i])
                x++ ;
        }
        cout << x << endl ;

        original.clear() ;
        sorted.clear() ;
    }

    return 0;
}
