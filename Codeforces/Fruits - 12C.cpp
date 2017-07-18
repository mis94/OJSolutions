#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    int n, m ;
    cin >> n >> m ;
    vector<int> vectOfNumbers(n) ;
    for(int i=0;i<n;i++)
        cin >> vectOfNumbers[i] ;
    sort(vectOfNumbers.begin(), vectOfNumbers.end()) ;
    map<string, int> mym ;
    while(m--)
    {
        string fruit ;
        cin >> fruit ;
        mym[fruit]++ ;
    }
    vector< pair<int, string> > vectOfPairs ;
    map<string, int>::iterator it = mym.begin() ;
    for(it;it!=mym.end();it++)
        vectOfPairs.push_back(make_pair(it->second, it->first)) ;
    sort(vectOfPairs.begin(), vectOfPairs.end()) ;
    int lucky = 0, unlucky = 0 ;
    for(int i=vectOfPairs.size()-1,j=0;i>=0;i--,j++)
        lucky += vectOfPairs[i].first*vectOfNumbers[j] ;
    for(int i=vectOfPairs.size()-1,j=vectOfNumbers.size()-1;i>=0;i--,j--)
        unlucky += vectOfPairs[i].first*vectOfNumbers[j] ;
    cout << lucky << " " << unlucky ;
    return 0;
}