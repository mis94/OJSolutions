#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <cmath>
#include <cstdlib>
using namespace std;
string toint(long long n) {
    stringstream ss;
    ss << n;
    string s;
    ss >> s;
    return s;
}
long long tostr(string s) {
    stringstream ss(s);
    long long n;
    ss >> n;
    return n;
}
set<long long> N;
int main() {

    int n, t;
    long long k;
    cin >> t;
    while (t--) {

        N.clear();
        cin >> n >> k;
        string s;
        long long mx = -1;
        mx = max(mx, k);
        while (1) {
            k = (k * k);
            s = toint(k);
            k = tostr(s.substr(0, n));
            mx = max(mx, k);
            if (N.find(k) != N.end())
                break;
            N.insert(k);

        }

        cout << mx << endl;
    }
}
