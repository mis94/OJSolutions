#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    int myHp, myATK, myDef, hisHp, hisATK, hisDef, hpPrice, atkPrice, defPrice ;
    cin >> myHp >> myATK >> myDef ;
    cin >> hisHp >> hisATK >> hisDef ;
    cin >> hpPrice >> atkPrice >> defPrice ;
    int mini = (int)1e9 ;
    for(int i=myHp;i<=10000;i++)
    {
        for(int j=max(hisDef+1,myATK);j<=200;j++)
        {
            for(int k=myDef;k<=100;k++)
            {
                if(hisATK<=k)
                {
                    int temp = (i-myHp)*hpPrice ;
                    temp += (j-myATK)*atkPrice ;
                    temp += (k-myDef)*defPrice ;
                    mini = min(mini, temp) ;
                    break ;
                }else
                {
                    int md = ceil((double)i/(hisATK-k)) ;
                    int hd = ceil((double)hisHp/(j-hisDef)) ;
                    if(md>hd)
                    {
                        int temp = (i-myHp)*hpPrice ;
                        temp += (j-myATK)*atkPrice ;
                        temp += (k-myDef)*defPrice ;
                        mini = min(mini, temp) ;
                        break ;
                    }
                }
            }
        }
    }
    cout << mini ;
    return 0;
}