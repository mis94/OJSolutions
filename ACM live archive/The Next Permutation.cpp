#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    int t ;
    cin >> t ;
    while(t--)
    {
        int n ;
        cin >> n ;
        string num ;
        cin >> num ;
        bool isBig = 1 ;
        for(int i=num.size()-1;i>=1;i--)
        {
            if(num[i]>num[i-1])
            {
                string tmp = num.substr(i-1,num.size()-i+1) ;
                sort(tmp.begin(),tmp.end()) ;
                for(int j=0;j<tmp.size();j++)
                {
                    if(tmp[j]==num[i-1]&&tmp[j+1]!=tmp[j])
                    {
                        int k = j+1 ;
                        while(k>0)
                        {
                            swap(tmp[k],tmp[k-1]) ;
                            k-- ;
                        }
                        break ;
                    }
                }
                cout << n << " " ;
                for(int j=0;j<i-1;j++)
                    cout << num[j] ;
                cout << tmp ;
                cout << endl ;
                isBig = 0 ;
                break ;
            }
        }
        if(isBig)
            cout << n << " " << "BIGGEST" << endl ;
    }
    return 0;
}
