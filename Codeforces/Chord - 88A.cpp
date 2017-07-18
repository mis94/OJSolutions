#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <string>
#include <map>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0) ;
    int x = 6 ;
    map<string,int> notes ;
    notes["C"] = 1 ;
    notes["C#"] = 2 ;
    notes["D"] = 3 ;
    notes["D#"] = 4 ;
    notes["E"] = 5 ;
    notes["F"] = 6 ;
    notes["F#"] = 7 ;
    notes["G"] = 8 ;
    notes["G#"] = 9 ;
    notes["A"] = 10 ;
    notes["B"] = 11 ;
    notes["H"] = 12 ;
    vector<string> triad(3) ;
    for(int i=0;i<3;i++)
        cin >> triad[i] ;
    while(x--)
    {
        if(notes.find(triad[1])->second-notes.find(triad[0])->second==4||notes.find(triad[1])->second-notes.find(triad[0])->second==-8)
        {
            if(notes.find(triad[2])->second-notes.find(triad[1])->second==3||notes.find(triad[2])->second-notes.find(triad[1])->second==-9)
            {
                cout << "major" ;
                return 0 ;
            }
        }else if(notes.find(triad[1])->second-notes.find(triad[0])->second==3||notes.find(triad[1])->second-notes.find(triad[0])->second==-9)
        {
            if(notes.find(triad[2])->second-notes.find(triad[1])->second==4||notes.find(triad[2])->second-notes.find(triad[1])->second==-8)
            {
                cout << "minor" ;
                return 0 ;
            }
        }
        next_permutation(triad.begin(),triad.end()) ;
    }
    cout << "strange" ;
    return 0;
}