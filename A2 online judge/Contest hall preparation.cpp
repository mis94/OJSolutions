#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    int t , n , m ;
    set<int> ids ;
    cin >> t ;
    while(t--)
    {
        cin >> n >> m ;
        int** pptr = new int*[n] ;
        for(int i=0;i<n;i++)
            pptr[i] = new int[m] ;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                cin >> pptr[i][j] ;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;)
            {
                if(ids.count(pptr[i][j])!=0||pptr[i][j]==-1)
                {
                    j++ ;
                    continue ;
                }
                if(i-1>=0&&j-1>=0)
                {
                    if(pptr[i][j]==pptr[i-1][j-1])
                    {
                        ids.insert(pptr[i][j]) ;
                        j++ ;
                        continue ;
                    }
                }
                if(i-1>=0)
                {
                    if(pptr[i][j]==pptr[i-1][j])
                    {
                        ids.insert(pptr[i][j]) ;
                        j++ ;
                        continue ;
                    }
                }
                if(i-1>=0&&j+1<=m-1)
                {
                    if(pptr[i][j]==pptr[i-1][j+1])
                    {
                        ids.insert(pptr[i][j]) ;
                        j++ ;
                        continue ;
                    }
                }
                if(j-1>=0)
                {
                    if(pptr[i][j]==pptr[i][j-1])
                    {
                        ids.insert(pptr[i][j]) ;
                        j++ ;
                        continue ;
                    }
                }
                if(j+1<=m-1)
                {
                    if(pptr[i][j]==pptr[i][j+1])
                    {
                        ids.insert(pptr[i][j]) ;
                        j++ ;
                        continue ;
                    }
                }
                if(i+1<=n-1&&j-1>=0)
                {
                    if(pptr[i][j]==pptr[i+1][j-1])
                    {
                        ids.insert(pptr[i][j]) ;
                        j++ ;
                        continue ;
                    }
                }
                if(i+1<=n-1)
                {
                    if(pptr[i][j]==pptr[i+1][j])
                    {
                        ids.insert(pptr[i][j]) ;
                        j++ ;
                        continue ;
                    }
                }
                if(i+1<=n-1&&j+1<=m-1)
                {
                    if(pptr[i][j]==pptr[i+1][j+1])
                    {
                        ids.insert(pptr[i][j]) ;
                        j++ ;
                        continue ;
                    }
                }
                j++ ;
            }
        }
        cout << ids.size() << endl ;
        ids.clear() ;
    }
    return 0;
}
