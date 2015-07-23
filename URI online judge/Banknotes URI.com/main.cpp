#include <iostream>

using namespace std;

int main()
{
    int x,a=0,b=0,c=0,d=0,f=0,g=0,h=0;
    cin>>x;
    cout<<x<<endl;
    while (x!=0)
    {
        if(x>=100)
        {
            x-=100;
            a+=1;
        }
        else if(x>=50)
        {
            x-=50;
            b+=1;
        }
        else if(x>=20)
        {
            x-=20;
            c+=1;
        }
        else if(x>=10)
        {
            x-=10;
            d+=1;
        }
        else if(x>=5)
        {
            x-=5;
            f+=1;
        }
        else if(x>=2)
        {
            x-=2;
            g+=1;
        }
        else if(x>=1)
        {
            x-=1;
            h+=1;
        }
    }
    cout<<a<<" nota(s) de R$ " <<"100,00"<<endl;
    cout<<b<<" nota(s) de R$ "<<"50,00"<<endl;
    cout<<c<<" nota(s) de R$ "<<"20,00"<<endl;
    cout<<d<<" nota(s) de R$ "<<"10,00"<<endl;
    cout<<f<<" nota(s) de R$ "<<"5,00"<<endl;
    cout<<g<<" nota(s) de R$ "<<"2,00"<<endl;
    cout<<h<<" nota(s) de R$ "<<"1,00"<<endl;

    return 0;
}
