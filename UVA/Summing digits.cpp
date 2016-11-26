#include <iostream>

using namespace std;

int main()
{
    int f , sum = 0 ;

    while(cin>>f)
    {
        sum = 0 ;
        if(f==0)
            break ;
        while(f>0)
        {
            sum += f%10 ;
            f /= 10 ;
        }
        while(1)
        {
            int g = 0 ;
            if(sum%10==sum)
            {
                cout << sum << endl ;
                break ;
            }
            else
            {
                while(sum>0)
                {
                    g += sum%10 ;
                    sum /= 10 ;
                }
                sum = g ;
            }
        }
    }

    return 0;
}
