#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    float s ;

    cin >> s ;

    if(s>0&&s<=400)
    {
        float x = s ;
        x *= 15 ;
        x /= 100 ;
        s += x ;
        cout << "Novo salario: " << fixed << setprecision(2) << s << endl << "Reajuste ganho: " << fixed << setprecision(2) << x << endl << "Em percentual: " << "15 %" << endl ;
    }else if(s>400&&s<=800)
    {
        float x = s ;
        x *= 12 ;
        x /= 100 ;
        s += x ;
        cout << "Novo salario: " << fixed << setprecision(2) << s << endl << "Reajuste ganho: " << fixed << setprecision(2) << x << endl << "Em percentual: " << "12 %" << endl ;
    }else if(s>800&&s<=1200)
    {
        float x = s ;
        x *= 10 ;
        x /= 100 ;
        s += x ;
        cout << "Novo salario: " << fixed << setprecision(2) << s << endl << "Reajuste ganho: " << fixed << setprecision(2) << x << endl << "Em percentual: " << "10 %" << endl ;
    }else if(s>1200&&s<=2000)
    {
        float x = s ;
        x *= 7 ;
        x /= 100 ;
        s += x ;
        cout << "Novo salario: " << fixed << setprecision(2) << s << endl << "Reajuste ganho: " << fixed << setprecision(2) << x << endl << "Em percentual: " << "7 %" << endl ;
    }else
    {
        float x = s ;
        x *= 4 ;
        x /= 100 ;
        s += x ;
        cout << "Novo salario: " << fixed << setprecision(2) << s << endl << "Reajuste ganho: " << fixed << setprecision(2) << x << endl << "Em percentual: " << "4 %" << endl ;
    }

    return 0;
}
