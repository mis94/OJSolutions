#include <iostream>

using namespace std;

int main()
{
    int n , x , y ;
    char a ;

    cin >> n ;

    while(n--)
    {
        cin >> x >> a >> y ;
        if(x==y)
        {
            cout << x*y << endl ;
            continue ;
        }else if((int)a>=65&&(int)a<=90)
        {
            cout << y-x << endl ;
            continue ;
        }else
            cout << x+y << endl ;
    }

    return 0;
}
