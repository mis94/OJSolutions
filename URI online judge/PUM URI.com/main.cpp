#include <iostream>

using namespace std;

int main()
{
    int n ;

    cin >> n ;

    int i = 1 ;

    while(n--)
    {
        for(int j=i,k=1;k<=3;j++,k++)
        {
            cout << j << " " ;
        }
        cout << "PUM" << endl ;
        i += 4 ;
    }

    return 0;
}
