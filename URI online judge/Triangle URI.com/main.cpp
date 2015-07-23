#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    float A , B , C ;

    cin >> A >> B >> C ;

    if(A+B<=C||A+C<=B)
    {
        float a = A + B ;
        a /= 2 ;
        a *= C ;
        cout << "Area " << "= " << fixed << setprecision(1) << a << endl ;
    }else if(B+C<=A||B+A<=C)
    {
        float a = A + B ;
        a /= 2 ;
        a *= C ;
        cout << "Area " << "= " << fixed << setprecision(1) << a << endl ;
    }else if(C+B<=A||C+A<=B)
    {
        float a = A + B ;
        a /= 2 ;
        a *= C ;
        cout << "Area " << "= " << fixed << setprecision(1) << a << endl ;
    }
    else
    {
        float p = A + B + C ;
        cout << "Perimetro " << "= " << fixed << setprecision(1) << p << endl ;
    }

    return 0;
}
