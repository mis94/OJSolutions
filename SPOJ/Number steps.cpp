#include <iostream>

using namespace std;

int main()
{
    int N , x , y , num ;

    cin >> N ;

    while(N--)
    {
        cin >> x >> y ;
        if(y>x||x-y>2)
            cout << "No Number" << endl ;
        else if(x==0&&y==0)
            cout << 0 << endl ;
        else if(x==1&&y==1)
            cout << 1 << endl ;
        else if(x%2==0&&y%2==0)
        {
            num = x + y ;
            cout << num << endl ;
        }
        else if(x%2!=0&&y%2!=0)
        {
            num = x + y - 1 ;
            cout << num << endl ;
        }else
            cout << "No Number" << endl ;
    }

    return 0;
}
