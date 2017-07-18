#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    int s, x1, x2;
    cin >> s >> x1 >> x2;
    int t1, t2;
    cin >> t1 >> t2;
    int p, d;
    cin >> p >> d;

    int trainTime = 0, walkTime = abs(x1-x2)*t2;

    if(d==1)
    {
        if(x1<p) // the man behind the train
        {
            if(x2>x1)
            {
                trainTime += (s-p)*t1;
                trainTime += s*t1;
                trainTime += (x2)*t1;
            }else
            {
                trainTime += (s-p)*t1;
                trainTime += (s-x2)*t1;
            }
        }else
        {
            if(x2>x1)
                trainTime += (x2-p)*t1;
            else
            {
                trainTime += (s-p)*t1;
                trainTime += (s-x2)*t1;
            }
        }
    }else
    {
        if(x1>p)
        {
            if(x2<x1)
            {
                trainTime += p*t1;
                trainTime += s*t1;
                trainTime += (s-x2)*t1;
            }else
            {
                trainTime += p*t1;
                trainTime += x2*t1;
            }
        }else
        {
            if(x2<x1)
                trainTime += (p-x2)*t1;
            else
            {
                trainTime += p*t1;
                trainTime += x2*t1;
            }
        }
    }
    //cout << trainTime << " " << walkTime << endl;
    cout << min(trainTime, walkTime);
    return 0;
}