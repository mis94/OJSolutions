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
        string ans ;
        cin >> ans ;
        int choice[4] ;
        for(int i=0;i<4;i++)
            choice[i] = 0 ;
        for(int i=0;i<ans.size();i++)
        {
            if(ans[i]=='A')
                choice[0]++ ;
            else if(ans[i]=='B')
                choice[1]++ ;
            else if(ans[i]=='C')
                choice[2]++ ;
            else
                choice[3]++ ;
        }
        int maxi = choice[0] ;
        for(int i=0;i<4;i++)
        {
            if(choice[i]>maxi)
                maxi = choice[i] ;
        }
        string finals ;
        for(int i=0;i<4;i++)
        {
            if(choice[i]==maxi&&i==0)
             {

                 finals.push_back('A') ;
             }
            else if(choice[i]==maxi&&i==1)
                {
                    //gua++ ;
                    finals.push_back('B') ;
                }
            else if(choice[i]==maxi&&i==2)
                {
                    //gua++ ;
                    finals.push_back('C') ;
                }
            else if(choice[i]==maxi&&i==3)
                {
                    //gua++ ;
                    finals.push_back('D') ;
                }
        }
        cout << maxi << " " << finals << endl ;
    }
    return 0;
}
