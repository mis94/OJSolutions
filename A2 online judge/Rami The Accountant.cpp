#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    string name , operation ;
    long long n , s , k , x ;
    cin >> n ;
    while(n--)
    {
        cin >> name ;
        cin >> s >> k ;
        while(k--)
        {
            cin >> operation >> x ;
            if(operation=="sell")
                s += x ;
            else
                s -= x ;
        }
        cout << name << " " << s << endl ;
    }
    return 0;
}