#include <bits/stdc++.h>

using namespace std;
string str ;
long long mem[65][65] ;
long long countPalindrome(int i, int j)
{
    if(i==j)
        return 1 ;
    else if(i+1==j&&str[i]==str[j])
        return 3 ;
    else if(i+1==j)
        return 2 ;
    long long &ret = mem[i][j] ;
    if(ret!=-1)
        return ret ;
    ret = 0 ;
    if(str[i]==str[j])
        ret += countPalindrome(i+1,j-1)+1 ;
    ret += countPalindrome(i+1,j) ;
    ret += countPalindrome(i,j-1) ;
    ret -= countPalindrome(i+1,j-1) ;
    return ret ;
}

int main()
{
    ios_base::sync_with_stdio(0) ;
    int t ;
    cin >> t ;
    while(t--)
    {
        memset(mem,-1,sizeof(mem)) ;
        cin >> str ;
        cout << countPalindrome(0,str.size()-1) << endl ;
    }
    return 0;
}
