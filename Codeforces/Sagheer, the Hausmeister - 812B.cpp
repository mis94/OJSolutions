#include <bits/stdc++.h>

using namespace std;
int n, m, highest;
char building[15][102];

int rec(int row, int col)
{
    bool allOff = 1;
    int i;
    if(col==0)
    {
        i = 0;
        for(i;i<m+2;i++)
        {
            if(building[row][i]=='1')
            {
                allOff = 0;
                col = i;
            }
        }
        if(row==highest)
        {
            if(allOff)
                return 0;
            else
                return col;
        }else
        {
            if(allOff)
                return min(rec(row-1, 0)+1, rec(row-1, m+1)+(m+1)+1);
            else
                return min(rec(row-1, 0)+(col*2+1), rec(row-1, m+1)+(m+1)+1);
        }
    }
    else
    {
        i = m+1;
        for(i;i>=0;i--)
        {
            if(building[row][i]=='1')
            {
                allOff = 0;
                col = i;
            }
        }
        if(row==highest)
        {
            if(allOff)
                return 0;
            else
                return (m+1)-col;
        }else
        {
            if(allOff)
                return min(rec(row-1, m+1)+1, rec(row-1, 0)+(m+1)+1);
            else
                return min(rec(row-1, 0)+(m+1)+1, rec(row-1, m+1)+((m+1)-col)*2+1);
        }
    }

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n >> m;
    highest = n-1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m+2;j++)
        {
            cin >> building[i][j];
            if(building[i][j]=='1')
                highest = min(i, highest);
        }
    }

    int ans = rec(n-1, 0);
    cout << ans;
    return 0;
}