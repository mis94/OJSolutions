#include <bits/stdc++.h>

using namespace std;
float child, par ;
bool test(float n)
{
    for(float i=1;;i++)
    {
        float c = (i*5) ;
        if(abs(i-((n-c)/2))==0.5||i==(n-c)/2)
        {
            child = i ;
            par = (n-c)/2 ;
            return true ;
        }
        if(i>((n-c)/2))
            return false ;
    }
}
int main()
{
    ios_base::sync_with_stdio(0) ;
    float g, goat = 0 ;
    while(cin>>g)
    {
        if(g==0)
            break ;
        else if(g==1)
        {
            cout << fixed << setprecision(1) << 0.0 << " " << 0.5 << " " << 0.5 << " " << 0.0 << endl ;
            continue ;
        }else if(g==2)
        {
            cout << fixed << setprecision(1) << 1.0 << " " << 0.5 << " " << 0.5 << " " << 0.0 << endl ;
            continue ;
        }else if(g==3)
        {
            cout << fixed << setprecision(1) << 0.5 << " " << 0.0 << " " << 0.0 << " " << 0.5 << endl ;
            continue ;
        }else if(g==4)
        {
            cout << fixed << setprecision(1) << 0.5 << " " << 0.5 << " " << 0.5 << " " << 0.5 << endl ;
            continue ;
        }else if(g==5)
        {
            cout << fixed << setprecision(1) << 0.5 << " " << 1.0 << " " << 1.0 << " " << 0.5 << endl ;
            continue ;
        }
        for(float i=g;;i--)
        {
            if(test(i))
            {
                float g1 = goat, g2 = goat, c1 = child, c2 = child, p1 = par, p2 = par ;
                while(g1>=2.5&&c1<=p1)
                {
                    g1 -= 2.5 ;
                    c1 += 0.5 ;
                }
                while(g1>=1&&p1<=c1)
                {
                    g1-- ;
                    p1 += 0.5 ;
                }
                while(g2>=1&&p2<=c2)
                {
                    g2-- ;
                    p2 += 0.5 ;
                }
                while(g2>=2.5&&c2<=p2)
                {
                    g2 -= 2.5 ;
                    c2 += 0.5 ;
                }
                if(g1==2.0)
                {
                    p1 -= 0.5 ;
                    c1 += 0.5 ;
                    g1 = 0.5 ;
                    cout << fixed << setprecision(1) << g1 << " " << p1 << " " << p1 << " " << c1 << endl ;
                    break ;
                }
                else if(g1<=g2)
                {cout << fixed << setprecision(1) << g1 << " " << p1 << " " << p1 << " " << c1 << endl ;
                break ;}else
                {
                    cout << fixed << setprecision(1) << g2 << " " << p2 << " " << p2 << " " << c2 << endl ;
                break ;
                }
            }
            goat++ ;
        }
        goat = 0 ;
    }
    return 0;
}
