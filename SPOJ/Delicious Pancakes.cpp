#include <bits/stdc++.h>
 
using namespace std;
float eps = 1e-6 ;
int main()
{
    ios_base::sync_with_stdio(0) ;
    while(1)
    {
        int n, r ;
        cin >> n >> r ;
        if(n==0&&r==0)
            break ;
        vector<float> vect(n) ;
        for(int i=0;i<n;i++)
            cin >> vect[i] ;
        float ans = 1, maxi = -1 ;
        for(int i=1;i<=r;i++)
        {
            float mini = -1 ;
            for(int j=0;j<n;j++)
            {
                float x ;
                cin >> x ;
                if(x==0)
                    continue ;
                if(mini==-1||vect[j]/x<mini)
                    mini = vect[j]/x ;
            }
            if(mini>maxi)
            {
                maxi = mini ;
                ans = i ;
            }
        }
        maxi *= 10 ;
        maxi += eps ;
        cout << ans << " " << (int)maxi << "\n" ;
    }
 
    return 0;
}
 