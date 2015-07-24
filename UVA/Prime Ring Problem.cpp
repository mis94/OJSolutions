#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <vector>
using namespace std;

vector< vector<int> > total ;

bool isPrime(int num)
{
    for(int i=num-1;i>1;i--)
    {
        if(num%i==0)
            return false ;
    }
    return true ;
}

void cycle(int n, vector<int> vect)
{
    if(vect.size()==n)
    {
        total.push_back(vect) ;
        return ;
    }
    for(int i=2;i<=n;i++)
    {
        bool isFound = 0 ;
        for(int j=0;j<vect.size();j++)
        {
            if(vect[j]==i)
            {
                isFound = 1 ;
                break ;
            }
        }
        if(!isFound&&isPrime(i+vect[vect.size()-1]))
        {
            if(vect.size()==n-1&&!isPrime(vect[0]+i))
                continue ;
            vect.push_back(i) ;
            cycle(n,vect) ;
            vect.pop_back() ;
        }
    }
    return ;
}

int main()
{
    ios_base::sync_with_stdio(0) ;
    int n , c = 1 ;
    while(cin>>n)
    {
        vector<int> vect ;
        vect.push_back(1) ;
        cycle(n,vect) ;
        cout << "Case " << c++ << ":\n" ;
        for(int i=0;i<total.size();i++)
        {
            for(int j=0;j<total[i].size();j++)
            {
                cout << total[i][j] ;
                if(j<total[i].size()-1)
                    cout << " " ;
            }
            if(i<total.size()-1)
                cout << endl ;
        }
        cout << endl ;
        total.clear() ;
    }
    return 0;
}

