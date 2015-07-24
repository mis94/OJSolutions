#include <iostream>

using namespace std;

int main()
{
    long long int n ;

    cin >> n ;

    while(n--)
    {
        long long int x ;
        cin >> x ;
        while(1)
        {
            long long int i ;
            char a ;
            cin >> a ;
            if(a=='=')
            {
                cout << x << endl ;
                break ;
            }
            cin >> i ;
            if(a=='+')
                x += i ;
            else if(a=='-')
                x -= i ;
            else if(a=='*')
                x *= i ;
            else if(a=='/')
                x /= i ;
        }
    }

    return 0;
}
