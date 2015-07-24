#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <vector>
using namespace std;
#define ll long long
vector<int> save(20000001) ;
/*ll makeItOne(ll n) This is a regular systematic recursion solving this problem but it is memory consuming and inefficient
{
    if(n==1)
        return 0 ;
    else if(n%2==0&&n%3==0)
        return 1+min(makeItOne(n/2),min(makeItOne(n/3),makeItOne(n-1))) ;
    else if(n%3==0)
        return 1+min(makeItOne(n/3),makeItOne(n-1)) ;
    else if(n%2==0)
        return 1+min(makeItOne(n/2),makeItOne(n-1)) ;
    else
        return 1+makeItOne(n-1) ;
}*/
/*ll makeItOne(ll n) This is one form of DP(Memorization)..here we start from the main problem and divide it into sub-problems
{                   and then solve them with the aid of the memorizing array
    if(n==1)
        return 0 ;
    if(save[n]!=0)
        return save[n] ;
    else if(n%2==0&&n%3==0)
        return 1+min(save[n/2]=makeItOne(n/2),min(save[n/3]=makeItOne(n/3),save[n-1]=makeItOne(n-1))) ;
    else if(n%3==0)
        return 1+min(save[n/3]=makeItOne(n/3),save[n-1]=makeItOne(n-1)) ;
    else if(n%2==0)
        return 1+min(save[n/2]=makeItOne(n/2),save[n-1]=makeItOne(n-1)) ;
    else
        return 1+(save[n-1]=makeItOne(n-1)) ;
}*/

/*int makeItOne(int n) Another trail of DP algorithm
{
    if(n<=1)
        return 0 ;
    if(save[n]!=0)
        return save[n] ;
    else if(n%2==0&&n%3==0)
        return save[n]=1+min(makeItOne(n/2),min(makeItOne(n/3),makeItOne(n-1))) ;
    else if(n%3==0)
        return save[n]=1+min(makeItOne(n/3),makeItOne(n-1)) ;
    else if(n%2==0)
        return save[n]=1+min(makeItOne(n/2),makeItOne(n-1)) ;
    else
        return save[n]=1+(makeItOne(n-1)) ;
}*/

/*int makeItOne(int n) Also an another trial with the same idea of DP
{
    if(n==1)
        return 0 ;
    if(save[n]!=0)
        return save[n] ;
    int res = 1+makeItOne(n-1) ;
    if(n%2==0)
        res = min(res,1+makeItOne(n/2)) ;
    if(n%3==0)
        res = min(res,1+makeItOne(n/3)) ;
    save[n] = res ;
    return res ;
}*/

/*int getMinSteps(int n) This DP way is different here we start from the trivial problem (i.e. n = 1 (0)) then go (bottom to up)
{                       then go through till we reach our n solution we it is guaranteed that every sub-problem is solved before
    vector<int> dp(n+1) ;               current problem
    dp[1] = 0 ; // Trivial case
    for(int i=2;i<=n;i++)
    {
        dp[i] = 1+dp[i-1] ;
        if(i%2==0)
            dp[i] = min(dp[i],1+dp[i/2]) ;
        if(i%3==0)
            dp[i] = min(dp[i],1+dp[i/3]) ;
    }
    return dp[n] ;
}*/

int main()
{
    ios_base::sync_with_stdio(0) ;
    int t , c = 1 ;
    cin >> t ;
    vector<int> dp(20000001) ;
    dp[1] = 0 ;
    for(int i=2;i<=20000001;i++)
    {
        dp[i] = 1+dp[i-1] ;
        if(i%2==0)
            dp[i] = min(dp[i],1+dp[i/2]) ;
        if(i%3==0)
            dp[i] = min(dp[i],1+dp[i/3]) ;
    }
    while(t--)
    {
        int n ;
        cin >> n ;
        cout << "Case " << c++ << ": " << dp[n] ;
        if(t)
            cout << endl ;
    }
    return 0;
}
