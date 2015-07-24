#include <bits/stdc++.h>

using namespace std;
string str ;
long long mem[5005] ;
int countPossible(int i)
{
    if(i>=str.size())
        return 1 ;
    if(str[i]=='0')
        return 0 ;
    long long &ret = mem[i] ;
    if(ret!=-1)
        return ret ;
    ret = 0 ;
    if(i<str.size()-1)
    {
        string temp ;
        temp.push_back(str[i]) ;
        temp.push_back(str[i+1]) ;
        if(temp<="26")
            ret += countPossible(i+2) ;
    }
    ret += countPossible(i+1) ;
    return ret ;
}

int main()
{
    ios_base::sync_with_stdio(0) ;
    while(cin>>str)
    {
        if(str=="0")
            break ;
        memset(mem,-1,sizeof(mem)) ;
        cout << countPossible(0) << endl ;// +1 for the case that each individual digit will form a letter. ex: BEAAD
    }

    return 0;
}
