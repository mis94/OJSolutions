#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    float number , hours , recived , salary = 0 ;

    cin >> number >> hours >> recived ;

    hours *= recived ;

    cout << "NUMBER = " << number << endl ;
    cout << "SALARY = U$ " << fixed << setprecision(2) << hours << endl ;

    return 0;
}
