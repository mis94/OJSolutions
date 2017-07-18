#include <bits/stdc++.h>

using namespace std;

int ans[101] ;
int minis[101] ;
int maxis[101] ;

int main()
{
    ios_base::sync_with_stdio(0) ;
    int d, sumTime, sumOfMaxis = 0, sumOfMinis = 0 ;
    cin >> d >> sumTime ;
    for(int i=0;i<d;i++)
    {
        cin >> minis[i] >> maxis[i] ;
        sumOfMaxis += maxis[i] ;
        sumOfMinis += minis[i] ;
        ans[i] = minis[i] ;
    }
    int needed = sumTime-sumOfMinis ;
    if(sumOfMaxis<sumTime||needed<0)
    {
        cout << "NO" ;
        return 0 ;
    }
    for(int i=0;i<d;i++)
    {
        while(ans[i]<maxis[i])
        {
            if(needed==0)
                goto finish ;
            ans[i]++ ;
            needed-- ;
        }
    }
    finish:
    cout << "YES" << endl ;
    for(int i=0;i<d;i++)
        cout << ans[i] << " " ;
    return 0;
}