#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    int t ;
    cin >> t ;
    while(t--)
    {
        string num ;
        long long x = 0 ;
        cin >> num ;
        while(1)
        {
            if(num.find('0')==-1)
            {
                cout << x << endl ;
                break ;
            }
            string after ;
            for(int i=num.find('0')+1;i<num.size();i++)
            {
                if(num[i]=='0')
                    break ;
                else
                    after.push_back(num[i]) ;
            }
            x++ ;
            string before = num.substr(0,num.find('0')+1) ;
            num.erase(0,num.find('0')+1) ;
            before += after ;
            for(int o=0;o<=before.find('0');o++)
            {
                for(int j=before.find('0');j<before.size();j++)
                {
                    if(j==o)
                        continue ;
                    string tmpe = before.substr(min(o,j),max(o,j)-min(o,j)+1) ;
                    if(tmpe.size()>10)
                        continue ;
                    bool istmpe = 1 ;
                    sort(tmpe.begin(),tmpe.end()) ;
                    for(int k=1;k<tmpe.size();k++)
                    {
                        if(tmpe[k]-tmpe[k-1]!=1)
                        {
                            istmpe = 0 ;
                            break ;
                        }
                    }
                    if(istmpe)
                        x++ ;
                }
            }
        }
    }
    return 0;
}
