#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    int n ;
    while(cin>>n)
    {
        if(n==0)
            break ;
        string encrypt ;
        cin >> encrypt ;
        int col = encrypt.size()/n ;
        vector<string> vect ;
        bool rev = 0 ;
        for(int i=0;i<encrypt.size();i+=n)
        {
            if(!rev)
            {
                string temp = encrypt.substr(i,n) ;
                vect.push_back(temp) ;
                rev = 1 ;
            }else
            {
                string temp = encrypt.substr(i,n) ;
                string temp2 ;
                for(int j=temp.size()-1;j>=0;j--)
                    temp2.push_back(temp[j]) ;
                vect.push_back(temp2) ;
                rev = 0 ;
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<vect.size();j++)
                cout << vect[j][i] ;
        }
        cout << endl ;
    }

    return 0;
}
