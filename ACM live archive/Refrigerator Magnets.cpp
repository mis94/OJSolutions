#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    while(1)
    {
        string text ;
        getline(cin,text) ;
        if(text=="END")
            break ;
        int arr[30] ;
        memset(arr,0,sizeof(arr)) ;
        for(int i=0;i<text.size();i++)
            arr[text[i]-'A']++ ;
        for(int i=0;i<26;i++)
        {
            if(arr[i]>1)
                goto finish ;
        }
        cout << text << endl ;
        finish: ;
    }

    return 0;
}
