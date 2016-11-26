#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
int mem[1000005] ;
int mod = 1000000007 ;
int twosAndThrees(int rem)
{
    if(rem==0)
        return 1 ;
    if(rem<=1)
        return 0 ;
    if(mem[rem]!=-1)
        return mem[rem] ;
    mem[rem] = 0 ;
    if(rem>=2)
    {
        mem[rem] += twosAndThrees(rem-2)%mod ;
    }
    if(rem>=3)
    {
        mem[rem] += twosAndThrees(rem-3)%mod ;
    }
    return mem[rem] ;
}
 
int main()
{
    ios_base::sync_with_stdio(0) ;
    int t ;
    cin >> t ;
    mem[0] = 0 ;
    mem[1] = 0 ;
    mem[2] = 1 ;
    mem[3] = 1 ;
    for(int i=4;i<=1000000;i++)
        mem[i] = (mem[i-2]+mem[i-3])%mod ;
    while(t--)
    {
        int n ;
        cin >> n ;
        cout << mem[n]%mod << "\n" ;
    }
 
    return 0;
}