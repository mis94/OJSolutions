#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    int n, d, l ;
    cin >> n >> d >> l ;
    if(l==1)
    {
        if(d==0||(d==1&&n%2!=0))
        {
            for(int i=1;i<=n;i++)
                cout << 1 << " " ;
        }
        else
            cout << -1 ;
        return 0 ;
    }
    vector<int> cards ;
    cards.push_back(d) ;
    while(1)
    {
        if(cards.size()==n-1)
        {
            if(l-1>=abs(d))
            {
                cards.pop_back() ;
                if(d>0)
                {
                    cards.push_back(l) ;
                    cards.push_back(l-d) ;
                }else
                {
                    cards.push_back(1) ;
                    cards.push_back(1-d) ;
                }
                for(int i=0;i<cards.size();i++)
                    cout << cards[i] << " " ;
                break ;
            }else
            {
                cout << -1 ;
                break ;
            }
        }
        if(d<1)
        {
            cards.pop_back() ;
            cards.push_back(1) ;
            cards.push_back((d-1)*-1) ;
            d = (d-1)*-1 ;
        }else if(d>=l)
        {
            cards.pop_back() ;
            cards.push_back(l) ;
            cards.push_back((d-l)*-1) ;
            d = (d-l)*-1 ;
        }else if(d>=1&&d<l)
        {
            cards.pop_back() ;
            cards.push_back(d+1) ;
            cards.push_back(1) ;
            d = 1 ;
        }
    }
    return 0;
}