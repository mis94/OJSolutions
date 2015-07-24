#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    int n ;
    vector <int> vect ;
    vect.resize(100001) ;
    vect[0] = 0 ;
    vect[1] = 1 ;
    for(int i=2;i<=100000;i++)
        vect[i] = vect[i-1]%10+vect[i-2]%10 ;
    while(cin>>n)
        cout << vect[n]%10 << endl ;
    return 0;
}
