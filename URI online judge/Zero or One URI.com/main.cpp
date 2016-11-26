#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    int a , b , c ;
    while(cin>>a>>b>>c)
    {
        if(a==b)
        {
            if(c!=a)
                cout << "C" << endl ;
            else
                cout << "*" << endl ;
        }else if(a==c)
        {
            if(b!=a)
                cout << "B" << endl ;
            else
                cout << "*" << endl ;
        }else
        {
            if(a!=b)
                cout << "A" << endl ;
            else
                cout << "*" << endl ;
        }
    }
    return 0;
}
