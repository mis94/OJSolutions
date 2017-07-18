#include <bits/stdc++.h>

using namespace std;
long long arr[30] ;
long long cumArr[100005] ;
int main()
{
    ios_base::sync_with_stdio(0) ;
    for(int i=0;i<26;i++)
        cin >> arr[i] ;
    string s ;
    cin >> s ;
    long long ans = 0 ;
    cumArr[0] = arr[s[0]-'a'] ;
    for(int i=1;i<s.size();i++)
        cumArr[i] = cumArr[i-1]+arr[s[i]-'a'] ;
    map< pair<char,long long>, long long > mym ;
    for(int i=0;i<s.size();i++)
    {
        if(mym.count(make_pair(s[i], cumArr[i]-arr[s[i]-'a']))!=0)
            ans += mym[make_pair(s[i], cumArr[i]-arr[s[i]-'a'])] ;
        mym[make_pair(s[i], cumArr[i])]++ ;
    }
    cout << ans ;
    return 0;
}