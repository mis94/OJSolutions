#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    int x = 0 , n ;
    cin >> n ;
    string one = "one" ;
    string two = "two" ;
    string* ptr = new string[n] ;
    for(int i=0;i<n;i++)
        cin >> ptr[i] ;
    for(int i=0;i<n;i++)
    {
        if(ptr[i].size()!=3)
            cout << 3 << endl ;
        else if(ptr[i]==one)
        {
            cout << 1 ;
            cout << endl ;
        }
        else if(ptr[i]==two)
        {
            cout << 2 ;
            cout << endl ;
        }
        else
        {
            for(int j=0;j<3;j++)
            {
                if(two[j]!=ptr[i][j])
                    x++ ;
            }
            if(x==1)
                cout << 2 << endl ;
            else
                cout << 1 << endl ;
        }
        x = 0 ;
    }
    return 0;
}
