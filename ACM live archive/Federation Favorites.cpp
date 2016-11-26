#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    int num ;
    while(cin>>num)
    {
        if(num==-1)
            return 0 ;
        int sum = 0 ;
        vector<int> divisors ;
        for(int i=1;i<num;i++)
        {
            if(num%i==0)
            {
                divisors.push_back(i) ;
                sum += i ;
            }
        }
        if(sum==num)
        {
            cout << num << " = " ;
            for(int i=0;i<divisors.size();i++)
            {
                if(i==divisors.size()-1)
                    cout << divisors[i] ;
                else
                    cout << divisors[i] << " + " ;
            }
            cout << endl ;
        }else
            cout << num << " is NOT perfect." << endl ;
    }
    return 0;
}
