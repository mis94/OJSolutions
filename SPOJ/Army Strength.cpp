#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    int t ;
    cin >> t ;
    cout << "\n" ;
    while(t--)
    {
        int ng, nm ;
        cin >> ng >> nm ;
        int maxi = -1 ;
        for(int i=0;i<ng;i++)
        {
            int x ;
            cin >> x ;
            if(x>maxi)
                maxi = x ;
        }
        int maxi2 = -1 ;
        for(int i=0;i<nm;i++)
        {
            int x ;
            cin >> x ;
            if(x>maxi2)
                maxi2 = x ;
        }
        if(ng==0&&nm==0)
            cout << "uncertain\n\n" ;
        else if(maxi>=maxi2)
            cout << "Godzilla\n\n" ;
        else
            cout << "MechaGodzilla\n\n" ;
    }
    return 0;
}
