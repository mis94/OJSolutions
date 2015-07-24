#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <map>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    int n ;
    cin >> n ;
    map<string,string> users ;
    map<string,string> loggedIn ;
    string query , username , password ;
    while(n--)
    {
        cin >> query ;
        if(query=="register")
        {
            cin >> username >> password ;
            if(users.count(username)==0)
            {
                cout << "success: new user added" << endl ;
                users.insert(pair<string,string>(username,password)) ;
            }else
                cout << "fail: user already exists" << endl ;
        }else if(query=="login")
        {
            cin >> username >> password ;
            if(users.count(username)==0)
                cout << "fail: no such user" << endl ;
            else if(users[username]!=password)
                cout << "fail: incorrect password" << endl ;
            else if(loggedIn.count(username)==1)
                cout << "fail: already logged in" << endl ;
            else
            {
                cout << "success: user logged in" << endl ;
                loggedIn.insert(pair<string,string>(username,password)) ;
            }
        }else
        {
            cin >> username ;
            if(users.count(username)==0)
                cout << "fail: no such user" << endl ;
            else if(loggedIn.count(username)==0)
                cout << "fail: already logged out" << endl ;
            else
            {
                cout << "success: user logged out" << endl ;
                loggedIn.erase(username) ;
            }
        }
    }
    return 0;
}
