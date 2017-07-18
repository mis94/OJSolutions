#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    string r1, r2, r3 ;
    cin >> r1 >> r2 >> r3 ;
    int xs = 0, os = 0 ;
    for(int i=0;i<3;i++)
    {
        if(r1[i]=='X')
            xs++ ;
        else if(r1[i]=='0')
            os++ ;
        if(r2[i]=='X')
            xs++ ;
        else if(r2[i]=='0')
            os++ ;
        if(r3[i]=='X')
            xs++ ;
        else if(r3[i]=='0')
            os++ ;
    }

    if(xs+os==9)
    {
        if(xs!=5||os!=4)
        {
            cout << "illegal" ;
            return 0 ;
        }
    }
    if(xs==0&&os==0)
    {
        cout << "first" ;
        return 0 ;
    }
    bool p1 = 0, p2 = 0 ;
    if(r1[0]==r1[1]&&r1[1]==r1[2])
    {
        if(r1[0]=='X')
            p1 = 1 ;
        else if(r1[0]=='0')
            p2 = 1 ;
    }
    if(r2[0]==r2[1]&&r2[1]==r2[2])
    {
        if(r2[0]=='X')
        {
            p1 = 1 ;
        }
        else if(r2[0]=='0')
        {
            p2 = 1 ;
        }
    }
    if(r3[0]==r3[1]&&r3[1]==r3[2])
    {
        if(r3[0]=='X')
        {
            p1 = 1 ;
        }
        else if(r3[0]=='0')
        {
            p2 = 1 ;
        }
    }
    if(r1[0]==r2[0]&&r2[0]==r3[0])
    {
        if(r1[0]=='X')
        {
            p1 = 1 ;
        }
        else if(r1[0]=='0')
        {
            p2 = 1 ;
        }
    }
    if(r1[1]==r2[1]&&r2[1]==r3[1])
    {
        if(r1[1]=='X')
        {
            p1 = 1 ;
        }
        else if(r1[1]=='0')
        {
            p2 = 1 ;
        }
    }
    if(r1[2]==r2[2]&&r2[2]==r3[2])
    {
        if(r1[2]=='X')
        {
            p1 = 1 ;
        }
        else if(r1[2]=='0')
        {
            p2 = 1 ;
        }
    }
    if(r1[0]==r2[1]&&r2[1]==r3[2])
    {
        if(r1[0]=='X')
        {
            p1 = 1 ;
        }
        else if(r1[0]=='0')
        {
            p2 = 1 ;
        }
    }
    if(r1[2]==r2[1]&&r2[1]==r3[0])
    {
        if(r1[2]=='X')
        {
            p1 = 1 ;
        }
        else if(r1[2]=='0')
        {
            p2 = 1 ;
        }
    }

    if(p1&&p2)
    {
        cout << "illegal" ;
        return 0 ;
    }else if(p1)
    {
        if(xs-os==1)
            cout << "the first player won" ;
        else
            cout << "illegal" ;
        return 0 ;
    }else if(p2)
    {
        if(xs==os)
            cout << "the second player won" ;
        else
            cout << "illegal" ;
        return 0 ;
    }

    if(xs+os==9)
        cout << "draw" ;
    else if(xs-os==1)
        cout << "second" ;
    else if(xs==os)
        cout << "first" ;
    else
        cout << "illegal" ;
    return 0;
}