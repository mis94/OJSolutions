#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    long long ans = 0 ;
    map<char, long long> myMap ;
    int n ;
    cin >> n ;
    string str ;
    cin >> str ;
    for(int i=0;i<str.size();i++)
    {
        if(myMap.count(str[i])==0)
            myMap.insert(make_pair(str[i],1)) ;
        else
            myMap[str[i]]++ ;
    }
    for(int i=0;i<str.size();i++)
    {
        ans += myMap[str[i]] ;
        myMap[str[i]]-- ;
    }
    cout << ans ;
    return 0;
}
