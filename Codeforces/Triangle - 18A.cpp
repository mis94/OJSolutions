#include <bits/stdc++.h>

using namespace std;
int getDist(int x1, int y1, int x2, int y2)
{
    return ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)) ;
}
bool isTheSame(int x1, int y1, int x2, int y2)
{
    if(x1==x2&&y1==y2)
        return true ;
    return false ;
}
int main()
{
    ios_base::sync_with_stdio(0) ;
    int x1, y1, x2, y2, x3, y3 ;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 ;

    int d1 = getDist(x1, y1, x2, y2) ;
    int d2 = getDist(x1, y1, x3, y3) ;
    int d3 = getDist(x2, y2, x3, y3) ;

    if(d1==d2+d3||d2==d1+d3||d3==d1+d2)
    {
        cout << "RIGHT" ;
        return 0 ;
    }
    // try right
    d1 = getDist(x1+1, y1, x2, y2) ;
    d2 = getDist(x1+1, y1, x3, y3) ;
    d3 = getDist(x2, y2, x3, y3) ;
    if(d1==d2+d3||d2==d1+d3||d3==d1+d2)
    {
        if(!isTheSame(x1+1, y1, x2, y2)&&!isTheSame(x1+1, y1, x3, y3))
        {
            cout << "ALMOST" ;
            return 0 ;
        }
    }
    d1 = getDist(x1, y1, x2+1, y2) ;
    d2 = getDist(x1, y1, x3, y3) ;
    d3 = getDist(x2+1, y2, x3, y3) ;
    if(d1==d2+d3||d2==d1+d3||d3==d1+d2)
    {
        if(!isTheSame(x2+1, y2, x1, y1)&&!isTheSame(x2+1, y2, x3, y3))
        {
            cout << "ALMOST" ;
            return 0 ;
        }
    }
    d1 = getDist(x1, y1, x2, y2) ;
    d2 = getDist(x1, y1, x3+1, y3) ;
    d3 = getDist(x2, y2, x3+1, y3) ;
    if(d1==d2+d3||d2==d1+d3||d3==d1+d2)
    {
        if(!isTheSame(x3+1, y3, x1, y1)&&!isTheSame(x3+1, y3, x2, y2))
        {
            cout << "ALMOST" ;
            return 0 ;
        }
    }
    //try left
    d1 = getDist(x1-1, y1, x2, y2) ;
    d2 = getDist(x1-1, y1, x3, y3) ;
    d3 = getDist(x2, y2, x3, y3) ;
    if(d1==d2+d3||d2==d1+d3||d3==d1+d2)
    {
        if(!isTheSame(x1-1, y1, x2, y2)&&!isTheSame(x1-1, y1, x3, y3))
        {
            cout << "ALMOST" ;
            return 0 ;
        }
    }
    d1 = getDist(x1, y1, x2-1, y2) ;
    d2 = getDist(x1, y1, x3, y3) ;
    d3 = getDist(x2-1, y2, x3, y3) ;
    if(d1==d2+d3||d2==d1+d3||d3==d1+d2)
    {
        if(!isTheSame(x2-1, y2, x1, y1)&&!isTheSame(x2-1, y2, x3, y3))
        {
            cout << "ALMOST" ;
            return 0 ;
        }
    }
    d1 = getDist(x1, y1, x2, y2) ;
    d2 = getDist(x1, y1, x3-1, y3) ;
    d3 = getDist(x2, y2, x3-1, y3) ;
    if(d1==d2+d3||d2==d1+d3||d3==d1+d2)
    {
        if(!isTheSame(x3-1, y3, x2, y2)&&!isTheSame(x3-1, y3, x1, y1))
        {
            cout << "ALMOST" ;
            return 0 ;
        }
    }
    // try up
    d1 = getDist(x1, y1+1, x2, y2) ;
    d2 = getDist(x1, y1+1, x3, y3) ;
    d3 = getDist(x2, y2, x3, y3) ;
    if(d1==d2+d3||d2==d1+d3||d3==d1+d2)
    {
        if(!isTheSame(x1, y1+1, x2, y2)&&!isTheSame(x1, y1+1, x3, y3))
        {
            cout << "ALMOST" ;
            return 0 ;
        }
    }
    d1 = getDist(x1, y1, x2, y2+1) ;
    d2 = getDist(x1, y1, x3, y3) ;
    d3 = getDist(x2, y2+1, x3, y3) ;
    if(d1==d2+d3||d2==d1+d3||d3==d1+d2)
    {
        if(!isTheSame(x1, y1, x2, y2+1)&&!isTheSame(x3, y3, x2, y2+1))
        {
            cout << "ALMOST" ;
            return 0 ;
        }
    }
    d1 = getDist(x1, y1, x2, y2) ;
    d2 = getDist(x1, y1, x3, y3+1) ;
    d3 = getDist(x2, y2, x3, y3+1) ;
    if(d1==d2+d3||d2==d1+d3||d3==d1+d2)
    {
        if(!isTheSame(x1, y1, x3, y3+1)&&!isTheSame(x2, y2, x3, y3+1))
        {
            cout << "ALMOST" ;
            return 0 ;
        }
    }
    // try down
    d1 = getDist(x1, y1-1, x2, y2) ;
    d2 = getDist(x1, y1-1, x3, y3) ;
    d3 = getDist(x2, y2, x3, y3) ;
    if(d1==d2+d3||d2==d1+d3||d3==d1+d2)
    {
        if(!isTheSame(x1, y1-1, x2, y2)&&!isTheSame(x1, y1-1, x3, y3))
        {
            cout << "ALMOST" ;
            return 0 ;
        }
    }
    d1 = getDist(x1, y1, x2, y2-1) ;
    d2 = getDist(x1, y1, x3, y3) ;
    d3 = getDist(x2, y2-1, x3, y3) ;
    if(d1==d2+d3||d2==d1+d3||d3==d1+d2)
    {
        if(!isTheSame(x1, y1, x2, y2-1)&&!isTheSame(x2, y2-1, x3, y3))
        {
            cout << "ALMOST" ;
            return 0 ;
        }
    }
    d1 = getDist(x1, y1, x2, y2) ;
    d2 = getDist(x1, y1, x3, y3-1) ;
    d3 = getDist(x2, y2, x3, y3-1) ;
    if(d1==d2+d3||d2==d1+d3||d3==d1+d2)
    {
        if(!isTheSame(x1, y1, x3, y3-1)&&!isTheSame(x2, y2, x3, y3-1))
        {
            cout << "ALMOST" ;
            return 0 ;
        }
    }
    cout << "NEITHER" ;
    return 0;
}