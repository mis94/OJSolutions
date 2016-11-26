#include <iostream>

using namespace std;

int main()
{
    int x , y ;

    cin >> x >> y ;
    if(x>y)
    {
        int k = x ;
        x = y ;
        y = k ;
    }
    for(int i=x+1;i<y;i++)
    {
        if(i%5==2||i%5==3)
        {
            cout << i << endl ;
        }
    }

    return 0;
}
