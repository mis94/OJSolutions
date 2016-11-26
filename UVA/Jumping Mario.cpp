#include <iostream>

using namespace std;

int main()
{
    int T , N ;
    int high = 0 , low = 0 ;
    int* ptr ;

    cin >> T ;

    for(int i=1;i<=T;i++)
    {
        cin >> N ;

        ptr = new int[N] ;

        for(int i=0;i<N;i++)
        {
            cin >> ptr[i] ;
        }
        for(int i=0;i<N-1;i++)
        {
            if(ptr[i]<ptr[i+1])
                high++ ;
            else if(ptr[i]>ptr[i+1])
                low++ ;
            else
                continue ;
        }
        cout << "Case " << i << ":" << " " << high << " " << low << endl ;
        high = 0 ;
        low = 0 ;
    }

    return 0;
}
