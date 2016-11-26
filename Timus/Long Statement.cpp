#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <set>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    int n ;
    cin >> n ;
    if(n<=2)
    {
        int x ;
        while(n--)
            cin >> x ;
        cout << "No" ;
    }else if(n>=6)
    {
        int x , ones = 0 , twos = 0 , threes = 0 ;
        while(n--)
        {
            cin >> x ;
            if(x==1)
                ones++ ;
            else if(x==2)
                twos++ ;
            else
                threes++ ;
        }
        if(ones==0&&twos==0)
            cout << "No" ;
        else if(twos==0&&threes==0)
            cout << "No" ;
        else if(ones==0&&threes==0)
            cout << "No" ;
        else
            cout << "Yes" ;
    }else
    {
       set< vector<int> > mys ;
       vector<int> vect (n) ;
       for(int i=0;i<n;i++)
            cin >> vect[i] ;
       int fact = 1 ;
       for(int i=2;i<=n;i++)
            fact *= i ;
       while(fact--)
       {
           mys.insert(vect) ;
           next_permutation(vect.begin(),vect.end()) ;
       }
       if(mys.size()>=6)
            cout << "Yes" ;
       else
            cout << "No" ;
    }
    return 0;
}
