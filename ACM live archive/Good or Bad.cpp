#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    int n ;
    cin >> n ;
    cin.ignore() ;
    while(n--)
    {
        string name ;
        getline(cin,name) ;
        int gs = 0, bs = 0 ;
        for(int i=0;i<name.size();i++)
        {
            if(name[i]=='g'||name[i]=='G')
                gs++ ;
            else if(name[i]=='b'||name[i]=='B')
                bs++ ;
        }
        if(bs==gs)
            cout << name << " is " << "NEUTRAL" << endl ;
        else if(bs>gs)
            cout << name << " is A " << "BADDY" << endl ;
        else
            cout << name << " is " << "GOOD" << endl ;
    }
    return 0;
}
