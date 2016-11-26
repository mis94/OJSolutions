#include <iostream>

using namespace std;

int main()
{
    int t , c , k , w ;

    cin >> t ;

    while(t--)
    {
        cin >> c >> k >> w ;
        int real = c*w ;
        if(real<=k)
            cout << "yes" << endl ;
        else
            cout << "no" << endl ;
    }

    return 0;
}
