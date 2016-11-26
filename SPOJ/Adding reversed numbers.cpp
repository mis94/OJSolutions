#include <iostream>

using namespace std;

int reverse(int x)
{
    int i = 0 ;
    while(x>0)
    {
        i *= 10 ;
        i += x%10 ;
        x /= 10 ;
    }
    return i ;
}

int main()
{
    int N , num1 , num2 ;

    cin >> N ;

    while(N--)
    {
        cin >> num1 >> num2 ;
        cout << reverse(reverse(num1)+reverse(num2)) << endl ;
    }

    return 0;
}
