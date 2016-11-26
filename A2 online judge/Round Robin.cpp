#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    int n , t ;
    while(1)
    {
        cin >> n ;
        if(n==0)
            return 0 ;
        cin >> t ;
        int i = 0 ;
        vector<int> players(n,0) ;
        while(1)
        {
            for(int j=i,k=1;j<players.size();k++,j++)
            {
                players[j] += 1 ;
                if(k==t)
                {
                    i = j ;
                    break ;
                }
                if(j==players.size()-1)
                    j = -1 ;
            }
            players.erase(players.begin()+i) ;
            bool x = 1 ;
            for(int j=1;j<players.size();j++)
            {
                if(players[j]!=players[j-1])
                {
                    x = 0 ;
                    break ;
                }
            }
            if(x)
            {
                cout << players.size() << " " << players[0] << endl ;
                break ;
            }
        }
    }
    return 0;
}
