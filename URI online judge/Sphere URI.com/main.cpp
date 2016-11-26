#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    float R ;
    float pi = 3.14159 ;
    float vol = 4/3 ;

    cin >> R ;

    vol *= R*R*R ;
    vol *= 4 ;
    vol *= pi ;
    vol /= 3 ;

    cout << "VOLUME " << "= " << fixed << setprecision(3) << vol << endl ;

    return 0;
}
