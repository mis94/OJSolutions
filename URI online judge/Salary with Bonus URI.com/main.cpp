#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    string name ;
    float salary , sold ;

    cin >> name ;

    cin >> salary >> sold ;

    sold *= 15 ;
    sold /= 100 ;

    salary += sold ;

    cout << "TOTAL = R$ " << fixed << setprecision(2) << salary << endl ;

    return 0;
}
