#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <map>
#include <string>
#include <iomanip>
using namespace std;
double eps = 1e-9 ;
int main()
{
    ios_base::sync_with_stdio(0) ;
    int n ;
    while(cin>>n)
    {
        if(n==0)
            return 0 ;
        int p = n ;
        string phone ;
        double ones = 0 , twos = 0 , threes = 0 , fours = 0 , total = 0 ;
        map<string,bool> valid ;
        while(n--)
        {
            string choice ;
            cin >> phone ;
            int s = phone.find(':') ;
            for(int i=s+1;i<phone.size();i++)
                choice.push_back(phone[i]) ;
            phone.erase(s) ;
            if(phone[0]!='+'&&phone[0]!='('&&phone[0]!='0')
            {
                for(int i=0;i<phone.size();i++)
                {
                    if(phone[i]=='-')
                    {
                        phone.erase(i,1) ;
                        i-- ;
                    }
                }
                string sta = "9821" ;
                sta += phone ;
                phone = sta ;
            }else if(phone[0]=='(')
            {
                for(int i=0;i<phone.size();i++)
                {
                    if(phone[i]=='('||phone[i]==')'||phone[i]=='-')
                    {
                        phone.erase(i,1) ;
                        i-- ;
                    }
                }
                string sta = "98" ;
                sta += phone ;
                phone = sta ;
            }else if(phone[0]=='0')
            {
                phone.erase(0,1) ;
                for(int i=0;i<phone.size();i++)
                {
                    if(phone[i]=='-')
                    {
                        phone.erase(i,1) ;
                        i-- ;
                    }
                }
                string sta = "98" ;
                sta += phone ;
                phone = sta ;
            }else
            {
                phone.erase(0,1) ;
                for(int i=0;i<phone.size();i++)
                {
                    if(phone[i]=='-'||phone[i]=='('||phone[i]==')')
                    {
                        if(phone[i+1]=='0')
                            phone.erase(i,2) ;
                        else
                            phone.erase(i,1) ;
                        i-- ;
                    }
                }
            }
            if(choice!="1"&&choice!="2"&&choice!="3"&&choice!="4")
            {
                if(valid.count(phone)!=0)
                    p-- ;
                else
                    valid.insert(pair<string,bool>(phone,false)) ;
                continue ;
            }else
            {
                if(valid.count(phone)!=0)
                {
                    p-- ;
                    if(valid[phone]==true)
                        continue ;
                    else
                        valid[phone] = true ;
                }
                if(choice=="1")
                    ones++ ;
                else if(choice=="2")
                    twos++ ;
                else if(choice=="3")
                    threes++ ;
                else
                    fours++ ;
                total++ ;
                valid.insert(pair<string,bool>(phone,true)) ;
            }
        }
        cout << fixed << setprecision(0) ;
        cout<<floor(((ones/total)*100)+eps)<<"%"<<endl<<floor(((twos/total)*100)+eps)<<"%"<<endl<<floor(((threes/total)*100)+eps)<<"%"<<endl<<floor(((fours/total)*100)+eps)<<
        "%"<<endl ;
        cout << "Participants:" << p << endl ;
    }
    return 0;
}
