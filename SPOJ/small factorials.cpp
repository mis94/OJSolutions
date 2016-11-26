#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <deque>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    int t ;
    cin >> t ;
    while(t--)
    {
        int n , y ;
        cin >> n ;
        y = n ;
        deque<int> tmp ;
        while(n>0)
        {
            tmp.push_front(n%10) ;
            n /= 10 ;
        }
        tmp.resize(tmp.size()) ;
        deque<int> product(tmp.size(),0) ;
        for(int i=y-1;i>1;i--)
        {
            deque<int> tmp2 ;
            int tempeepo = i ;
            while(tempeepo>0)
            {
                tmp2.push_front(tempeepo%10) ;
                tempeepo /= 10 ;
            }
            tmp2.resize(tmp2.size()) ;
            for(int j=tmp2.size()-1;j>=0;j--)
            {
                int carry = 0 , h ;ag:
                for(int k=tmp.size()-1;k>=0;k--)
                {
                    if((k+j)>=product.size())
                    {
                        product.resize(product.size()+1,0) ;
                        goto ag ;
                    }
                    product[k+j] = product[k+j]+(tmp[k]*tmp2[j])+carry ;
                    carry = product[k+j]/10 ;
                    product[k+j] = product[k+j]%10 ;
                    h = k+j ;
                }
                if(carry!=0&&h!=0)
                    product[h-1] = carry ;
                else if(carry!=0)
                    product.push_front(carry) ;
            }
            tmp = product ;
            product.clear() ;
            product.resize(tmp.size(),0) ;
        }
        for(int i=0;i<tmp.size();i++)
            cout << tmp[i] ;
        cout << endl ;
    }

    return 0;
}
