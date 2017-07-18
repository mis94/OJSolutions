#include <bits/stdc++.h>

using namespace std;
int arr[1005] ;
int main()
{
    ios_base::sync_with_stdio(0) ;
    int n ;
    cin >> n ;
    vector< pair<int, int> > vect(n) ;
    for(int i=0;i<n;i++)
    {
        cin >> vect[i].first >> vect[i].second ;
        if(vect[i].first<vect[i].second)
            swap(vect[i].first, vect[i].second) ;
    }
    sort(vect.begin(), vect.end()) ;
    memset(arr, 0, sizeof(arr)) ;
    vector<int> ans ;
    for(int i=0;i<vect.size();i++)
    {
        if(arr[i]==0)
        {
            arr[i] = 1 ;
            ans.push_back(vect[i].first) ;
            for(int j=i+1;j<vect.size();j++)
            {
                if(vect[i].first<=vect[j].first&&vect[i].first>=vect[j].second)
                    arr[j] = 1 ;
            }
        }
    }
    cout << ans.size() << endl ;
    for(int i=0;i<ans.size();i++)
        cout << ans[i] << " " ;
    return 0;
}