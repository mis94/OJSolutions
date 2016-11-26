#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <string>
using namespace std;
long long modulo = 1e9+7 ;
int main()
{
    ios_base::sync_with_stdio(0) ;
    int t ;
    cin >> t ;
    while(t--)
    {
        long long config = 1 ;
        string sticker ;
        cin >> sticker ;
        for(int i=0;i<sticker.size();i++)
        {
            if(sticker[i]=='?'&&i!=0)
            {
                char tmp ;
                if(sticker[i-1]!='?')
                    tmp = sticker[i-1] ;
                else
                    continue ;
                for(int j=i,k=0;j<sticker.size();k++,j++)
                {
                    if(sticker[j]!='?'&&sticker[j]!=tmp)
                    {
                        config *= k+1 ;
                        config %= modulo ;
                        i = j-1 ;
                        break ;
                    }else if(sticker[j]!='?')
                    {
                        i = j-1 ;
                        break ;
                    }
                    if(j==sticker.size()-1)
                        i = j ;
                }
            }
        }
        cout << config << endl ;
    }
    return 0;
}
