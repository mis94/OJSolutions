#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    string str ;
    cin >> str ;
    for(int i=0;i<str.size()-2;i++)
    {
        if(i!=0)
        {
            if(str[i]=='a'&&str[i+1]=='t')
            {
                int j = i ;
                str.insert(j, "@") ;
                j++ ;
                str.erase(j, 2) ;
                break ;
            }
        }
    }
    for(int i=0;i<str.size()-3;i++)
    {
        if(i!=0)
        {
            if(str[i]=='d'&&str[i+1]=='o'&&str[i+2]=='t')
            {
                int j = i ;
                str.insert(j, ".") ;
                j++ ;
                str.erase(j, 3) ;
            }
        }
    }
    cout << str ;
    return 0;
}