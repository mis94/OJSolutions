#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <sstream>
using namespace std;

int main()
{
    int num1 , num2 , maximum = 0 , ans = 0 ;
    string a , b ;
    stringstream ss ;
    cin >> a >> b ;
    for(int i=0;i<a.size();i++)
    {
        if((int)a[i]-48>maximum)
            maximum = (int)a[i]-48 ;
    }
    for(int i=0;i<b.size();i++)
    {
        if((int)b[i]-48>maximum)
            maximum = (int)b[i]-48 ;
    }
    ss << a ;
    ss >> num1 ;
    ss.clear() ;
    ss << b ;
    ss >> num2 ;
    maximum++ ;
/*    if(num1==1&&num2==1000)
    {
        cout << "4" << endl ;
        return 0 ;
    }else if(num1==1000&&num2==1)
    {
        cout << "4" << endl ;
        return 0 ;
    }*/
    while(max(num1,num2)>0)
    {
        int x = num1%10 ;
        x += num2%10 ;
        num1 /= 10 ;
        num2 /= 10 ;
        if(x>=maximum&&max(num1,num2)>0)
        {
            ans++ ;
            num1++ ;
        }else if(x>=maximum&&max(num1,num2)==0)
            ans += 2 ;
        else
            ans++ ;
    }
    cout << ans << endl ;
    return 0;
}