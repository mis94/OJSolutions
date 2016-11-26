#include<iostream>
#include<string>
using namespace std;


int main()
{
    string x ;
    int p , i = 0 ;
    int TTT = 0 , TTH = 0 , THT = 0 , THH = 0 , HTT = 0 , HTH = 0 , HHT = 0 , HHH = 0 ;
    cin >> p ;
    cin >> x ;

    while(p--)
    {
        while(i<39)
        {
            if(x.substr(i,3)=="TTT")
                TTT += 1 ;
            else if(x.substr(i,3)=="TTH")
                TTH += 1 ;
            else if(x.substr(i,3)=="THT")
                THT += 1 ;
            else if(x.substr(i,3)=="THH")
                THH += 1 ;
            else if(x.substr(i,3)=="HTT")
                HTT += 1 ;
            else if(x.substr(i,3)=="HTH")
                HTH += 1 ;
            else if(x.substr(i,3)=="HHT")
                HHT += 1 ;
            else if(x.substr(i,3)=="HHH")
                HHH += 1 ;
            i += 3 ;
        }
        cout << p << " " << TTT << " " << TTH << " " << THT << " " << THH << " " << HTT << " " << HTH << " " << HHT << " " << HHH << endl ;

    }

    return 0;
}
