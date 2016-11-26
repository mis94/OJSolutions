#include<bits/stdc++.h>
using namespace std ;

int main()
{
    ios_base::sync_with_stdio(0) ;
    int t ;
    cin >> t ;
    while(t--)
    {
        string exp ;
        cin >> exp ;
        stack<char> temp ;
        for(int i=0;i<exp.size();i++)
        {
            if(exp[i]>='a'&&exp[i]<='z')
                cout << exp[i] ;
            else if(exp[i]=='(')
                temp.push(exp[i]) ;
            else if(exp[i]==')')
            {
                while(temp.top()!='(')
                {
                    cout << temp.top() ;
                    temp.pop() ;
                }
                temp.pop() ;
            }else
            {
                rep:
                if(temp.empty())
                    temp.push(exp[i]) ;
                else if(exp[i]=='^')
                    temp.push(exp[i]) ;
                else if((exp[i]=='*'||exp[i]=='/')&&(temp.top()=='+'||temp.top()=='-'))
                    temp.push(exp[i]) ;
                else if(temp.top()=='(')
                    temp.push(exp[i]) ;
                else
                {
                    cout << temp.top() ;
                    temp.pop() ;
                    goto rep ;
                }
            }
        }
        if(temp.size()!=0)
        {
            while(temp.size()!=0)
            {
                if(temp.top()!='('&&temp.top()!=')')
                    cout << temp.top() ;
                temp.pop() ;
            }
        }
        cout << endl ;
    }
    return 0 ;
}
