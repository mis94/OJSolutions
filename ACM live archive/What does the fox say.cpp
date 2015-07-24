#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    int t ;
    cin >> t ;
    cin.ignore() ;
    while(t--)
    {
        string input ;
        vector<string> allSaid ;
        set<string> others ;
        getline(cin,input) ;
        for(int i=0,j=0;i<input.size();i++)
        {
            if(input[i]==' '||i==input.size()-1)
            {
                string temp = input.substr(j,i-j) ;
                j = i+1 ;
                allSaid.push_back(temp) ;
            }
        }
        allSaid[allSaid.size()-1].push_back(input[input.size()-1]) ;
        while(1)
        {
            string choice ;
            getline(cin,choice) ;
            if(choice=="what does the fox say?")
                break ;
            for(int i=choice.size()-1;i>=0;i--)
            {
                if(choice[i]==' ')
                {
                    string temp = choice.substr(i+1,choice.size()-i+1) ;
                    others.insert(temp) ;
                    break ;
                }
            }
        }
        bool tafeeh = 1 ;
        for(int i=0;i<allSaid.size();i++)
        {
            if(others.count(allSaid[i])==0&&tafeeh)
            {
                cout << allSaid[i] ;
                tafeeh = 0 ;
            }
            else if(others.count(allSaid[i])==0)
                cout << " " << allSaid[i] ;
        }
        //if(t)
            cout << endl ;
    }
    return 0;
}
