#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    int c = 1 ;
    while(1)
    {
        int n ;
        cin >> n ;
        string prev , news ;
        getline(cin,prev,'*') ;
        for(int i=0;i<prev.size();i++)
        {
            if(prev[i]>='A'&&prev[i]<='Z')
                prev[i] += ' ' ;
        }
        vector<string> memory ;
        string tmpprev ;
        for(int i=0;i<prev.size();i++)
        {
            if(prev[i]=='.'||prev[i]==','||prev[i]==':'||prev[i]==';'||prev[i]=='?'||prev[i]=='!')
            {
                memory.push_back(tmpprev) ;
                tmpprev.clear() ;
                i++ ;
                continue ;
            }
            tmpprev.push_back(prev[i]) ;
        }
        /*for(int i=0;i<memory.size();i++)
            cout << memory[i] << endl ;*/
        getline(cin,news,'#') ;
        for(int i=0;i<news.size();i++)
        {
            if(news[i]>='A'&&news[i]<='Z')
                news[i] += ' ' ;
        }
        cout << "Learning case " << c << endl ;
        vector<string> read ;
        string tmpnews ;
        for(int i=0;i<news.size();i++)
        {
            if(news[i]=='.'||news[i]==','||news[i]==':'||news[i]==';'||news[i]=='?'||news[i]=='!'||i==news.size()-1)
            {
                read.push_back(tmpnews) ;
                tmpnews.clear() ;
                continue ;
            }
            tmpnews.push_back(news[i]) ;
        }
        /*for(int i=0;i<read.size();i++)
            cout << read[i] << endl ;*/
        set<string> askW ;
        vector<string> askS ;
        for(int i=0;i<read.size();i++)
        {
            int k = 0 ;
            bool searchForNs = 1 ;
            for(int j=0;j<read[i].size();j++)
            {
                if(read[i][j]==' '||read[i][j]=='.'||read[i][j]==','||read[i][j]==':'||read[i][j]==';'||read[i][j]=='?'||read[i][j]=='!')
                {
                    string tmp = read[i].substr(k,j-k) ;
                    bool is_found = 0 ;
                    k = j+1 ;
                    for(int u=0;u<memory.size();u++)
                    {
                        if(memory[u].find(tmp)!=-1)
                        {
                            is_found = 1 ;
                            break ;
                        }
                    }
                    if(!is_found&&askW.count(tmp)==0)
                    {
                        searchForNs = 0 ;
                        cout << "What does the word " << '"' << tmp << '"' << " mean?" << endl ;
                        askW.insert(tmp) ;
                    }else if(!is_found)
                        searchForNs = 0 ;
                }
            }
            if(!searchForNs)
                cout << "What does the sentence " << '"' << read[i] << '"' << " mean?" << endl ;
            else
            {
                int x = 0 ;
                string tmp ;
                for(int u=0;u<read[i].size();u++)
                {
                    if(read[i][u]==' ')
                        x++ ;
                    if(x==n||u==read[i].size()-1)
                    {
                        bool b = 1 ;
                        for(int m=0;m<memory.size();m++)
                        {
                            if(memory[m].find(tmp)==-1)
                            {
                                cout << "What does the sentence " << '"' << read[i] << '"' << " mean?" << endl ;
                                b = 0 ;
                                break ;
                            }
                        }
                        if(!b)
                            break ;
                        x = 0 ;
                        tmp.clear() ;
                        for(int l=u;l>=0;l--)
                        {
                            if(read[i][l]==' ')
                            {
                                u = l ;
                                break ;
                            }
                        }
                    }
                    tmp.push_back(read[i][u]) ;
                }
            }
        }
        c++ ;
    }
    return 0;
}
