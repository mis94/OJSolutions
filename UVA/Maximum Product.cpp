#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    bool is_positive = 0 ;
    int m = 1 , x , n ;
    long long maxi = 1 , tempmax = 1 ;
    vector<int> seq ;
    while(cin >> n)
    {
        while(n--)
        {
            cin >> x ;
            seq.push_back(x) ;
        }
        for(int i=0;i<seq.size();i++)
        {
            for(int j=0;j<=i;j++)
                tempmax *= seq[j] ;
            maxi = max(maxi,tempmax) ;
            tempmax = 1 ;
        }
        if(maxi>0)
            cout << "Case #" << m << ": The maximum product is " << maxi << "." << endl ;
        else
            cout << "Case #" << m << ": The maximum product is " << 0 << "." << endl ;
        tempmax = 1 ;
        maxi = 1 ;
        seq.clear() ;
        m++ ;
    }
    return 0;
}
