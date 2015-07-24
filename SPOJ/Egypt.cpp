#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    int s1 , s2 , s3 , x , y , z ;
    while(1)
    {
        cin >> s1 >> s2 >> s3 ;
        if(s1==0&&s2==0&&s3==0)
            return 0 ;
        if(s1>s2)
        {
            if(s1>s3)
            {
                x = s1 ;
                y = s2 ;
                z = s3 ;
            }
            else
            {
                x = s3 ;
                y = s1 ;
                z = s2 ;
            }
        }else
        {
            if(s2>s3)
            {
                x = s2 ;
                y = s1 ;
                z = s3 ;
            }
            else
            {
                x = s3 ;
                y = s1 ;
                z = s2 ;
            }
        }
        if((z*z)+(y*y)==(x*x))
            cout << "right" << endl ;
        else
            cout << "wrong" << endl ;
    }
    return 0;
}
