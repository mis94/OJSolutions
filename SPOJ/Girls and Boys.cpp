#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    float g , b ;
    while(1)
    {
        cin >> g >> b ;
        if(g==-1)
            return 0 ;
        if(g==0||b==0)
            cout << max(g,b) << endl ;
        else if(g==b)
            cout << 1 << endl ;
        else
            cout << ceil(max(g,b)/(min(g,b)+1)) << endl ;
    }
    return 0;
}
