#include<bits/stdc++.h>
using namespace std;
int arr[105], goal, ns, flag, n ;
int taken[105] = {}, accum[105] ;
int dfs(int idx, int st, int sum, int tns)
{
    if(sum==goal)
    {
        if(tns+1 == ns)
            return 1 ;
        if(dfs(0, 1, 0, tns+1))
            return 1 ;
        return 0 ;
    }
    if(st==1)
    {
        int i ;
        for(i = 0; taken[i]; i++);
        taken[i] = 1 ;
        if(dfs(i+1, 0, arr[i], tns))
            return 1 ;
        taken[i] = 0 ;
    }else
    {
        for(int i=idx;i<n;i++)
        {
            if(taken[i]==0&&sum+arr[i]<=goal&&sum+accum[i]>=goal)
            {
                if(i&&arr[i]==arr[i-1]&&accum[i-1]==0)
                    continue ;
                taken[i] = 1 ;
                if(dfs(i+1, 0, sum+arr[i], tns))
                    return 1 ;
                taken[i] = 0 ;
                if(sum+arr[i]==goal)
                    return 0 ;
            }
        }
    }
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(0) ;
    int i ;
    while(cin>>n&&n)
    {
        int sum = 0 ;
        for(int i=0;i<n;i++)
        {
            cin >> arr[i] ;
            sum += arr[i] ;
            taken[i] = 0 ;
        }
        sort(arr, arr+n) ;
        for(i=n-1, accum[n]=0;i>=0;i--)
            accum[i] = accum[i+1]+arr[i];
        int len = arr[0] ;
        flag = 0 ;
        for(;len<=sum/2;len++)
        {
            if(sum%len!=0)
                continue ;
            goal = len ;
            ns = sum/len ;
            flag = dfs(0,1,0,0) ;
            if(flag)
                break ;
        }
        if(!flag)
            goal = sum ;
        cout << goal << "\n" ;
    }
    return 0;
}
