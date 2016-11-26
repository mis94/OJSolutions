#include <iostream>

using namespace std;

int main()
{
    int t , a , b ;

    cin >> t ;

    while(t--)
    {
        cin >> a >> b ;
        if(b>a)
            cout << "<" << endl ;
        else if(a>b)
            cout << ">" << endl ;
        else
            cout << "=" << endl ;
    }

    return 0;
}
