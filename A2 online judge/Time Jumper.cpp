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
    int t , y , n , sum = 0 , brute = 1 ;
    set<int> p ;
    set<int> :: iterator it ;
    vector<int> vect ;
    cin >> t ;
    while(t--)
    {
        cin >> y >> n ;
        int* ptr = new int[n] ;
        for(int i=0;i<n;i++)
            cin >> ptr[i] ;
        for(int i=2;i<=n-1;i++)
            brute *= i ;
        int f = brute ;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                vect.push_back(ptr[j]) ;
            vect.push_back(ptr[i]) ;
            vect.erase(vect.begin()+i) ;
            p.insert(ptr[i]) ;
            while(brute--)
            {
                for(int j=n-2;j>=0;j--)
                {
                    for(int k=n-1;k>=j;k--)
                        sum += vect[k] ;
                    p.insert(sum) ;
                    sum = 0 ;
                }
                next_permutation(vect.begin(),vect.begin()+(n-1)) ;
            }
            brute = f ;
            vect.clear() ;
        }
        for(it=p.begin();it!=p.end();it++)
            cout << y+(*it) << endl ;
        p.clear() ;
        brute = 1 ;
    }
    return 0;
}
