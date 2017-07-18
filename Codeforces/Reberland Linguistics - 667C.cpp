#include <bits/stdc++.h>

using namespace std;
string str ;
set<string> mys ;
map< pair<int, string>, int> mym ;
int rec(int i, string prev)
{
    if(i<=5)
        return 0;
    if(mym.count(make_pair(i, prev))!=0)
    {
        //cout << "ok\n" ;
        return mym[make_pair(i, prev)] ;
    }
    int x = 0 ;
    if(prev.size()==3)
    {
        if(i>=6)
        {
            mys.insert(str.substr(i-1, 2)) ;
            x = rec(i-2, str.substr(i-1, 2))+1 ;
        }
        if(i>=7&&str.substr(i-2, 3)!=prev)
        {
            mys.insert(str.substr(i-2, 3)) ;
            x = rec(i-3, str.substr(i-2, 3))+1 ;
        }
    }else if(prev.size()==2)
    {
        if(i>=6&&str.substr(i-1, 2)!=prev)
        {
            mys.insert(str.substr(i-1, 2)) ;
            x = rec(i-2, str.substr(i-1, 2))+1 ;
        }
        if(i>=7)
        {
            mys.insert(str.substr(i-2, 3)) ;
            x = rec(i-3, str.substr(i-2, 3))+1 ;
        }
    }else if(prev.size()==0)
    {
        if(i>=6)
        {
            mys.insert(str.substr(i-1, 2)) ;
            x = rec(i-2, str.substr(i-1, 2))+1 ;
        }
        if(i>=7)
        {
            mys.insert(str.substr(i-2, 3)) ;
            x = rec(i-3, str.substr(i-2, 3))+1 ;
        }
    }
    mym[make_pair(i, prev)] = x ;
}

int main()
{
    ios_base::sync_with_stdio(0) ;
    cin >> str ;
    rec(str.size()-1, "") ;
    cout << mys.size() << endl ;
    for(set<string>::iterator it=mys.begin();it!=mys.end();it++)
        cout << (*it) << "\n" ;
    return 0;
}