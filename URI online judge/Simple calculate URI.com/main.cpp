#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    float Code , units , price ;

    float Code2 , units2 , price2 ;

    float paid = 0 ;

    cin >> Code >> units >> price ;

    price *= units ;

    cin >> Code2 >> units2 >> price2 ;

    price2 *= units2 ;

    paid += price ;
    paid += price2 ;

    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << paid << endl ; // that keeps 2 numbers after the decimal point

    return 0;
}
