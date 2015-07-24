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
    int n ;
    cin >> n ;
    string pin ;
    vector<int> counts (10) ;
    bool isweak = 0 ;
    while(n--)
    {
        cin >> pin ;
        for(int i=0;i<pin.size();i++)
            counts[pin[i]-'0']++ ;
        for(int i=0;i<counts.size();i++)
        {
            if(counts[i]>=3)
            {
                cout << "WEAK" << endl ;
                isweak = 1 ;
                break ;
            }
        }
        if(!isweak)
        {
            for(int i=0;i<=3;i++)
            {
                if(pin[i]-pin[i+1]==1&&pin[i]-pin[i+2]==2)
                {
                    cout << "WEAK" << endl ;
                    isweak = 1 ;
                    break ;
                }else if(pin[i+1]-pin[i]==1&&pin[i+2]-pin[i+1]==1)
                {
                    cout << "WEAK" << endl ;
                    isweak = 1 ;
                    break ;
                }
            }
        }
        if(!isweak)
            cout << "ACCEPTABLE" << endl ;
        isweak = 0 ;
        counts.clear() ;
        counts.resize(10) ;
    }

    return 0;
}
