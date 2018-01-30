#include <bits/stdc++.h>

using namespace std;
#define ll long long
ll arr[100005];
ll tree[200015];
ll lazy[200015];

int getMid(int rangeStart, int rangeEnd) {
    return (rangeStart+rangeEnd)/2;
}

void build(int node, int rangeStart, int rangeEnd) {
    if(rangeStart > rangeEnd)
        return;
    if(rangeStart == rangeEnd) {
        tree[node] = arr[rangeStart];
        return;
    }

    build(node*2, rangeStart, getMid(rangeStart, rangeEnd));
    build(node*2 + 1, getMid(rangeStart, rangeEnd)+1, rangeEnd);

    tree[node] = max(tree[node*2], tree[node*2 + 1]);
}

void update(int node, int rangeStart, int rangeEnd, int updateStart, int updateEnd, ll updateValue) {
    if(lazy[node] != 0) {
        tree[node] = lazy[node];
        if(rangeStart != rangeEnd) {
            lazy[node*2] = lazy[node];
            lazy[node*2 + 1] = lazy[node];
        }
        lazy[node] = 0;
    }
    if(rangeStart > rangeEnd || rangeStart > updateEnd || rangeEnd < updateStart)
        return;
    if(rangeStart >= updateStart &&  rangeEnd <= updateEnd) {
        tree[node] = updateValue;
        if(rangeStart != rangeEnd) {
            lazy[node*2] = updateValue;
            lazy[node*2 + 1] = updateValue;
        }
        return;
    }
    update(node*2, rangeStart, getMid(rangeStart, rangeEnd), updateStart, updateEnd, updateValue);
    update(node*2 + 1, getMid(rangeStart, rangeEnd) + 1, rangeEnd, updateStart, updateEnd, updateValue);

    tree[node] = max(tree[node*2], tree[node*2 + 1]);
}

ll query(int node, int rangeStart, int rangeEnd, int queryStart, int queryEnd) {
    if(lazy[node] != 0) {
        tree[node] = lazy[node];
        if(rangeStart != rangeEnd) {
            lazy[node*2] = lazy[node];
            lazy[node*2 + 1] = lazy[node];
        }
        lazy[node] = 0;
    }
    if(rangeStart > rangeEnd || rangeStart > queryEnd || rangeEnd < queryStart)
        return 0;
    if(rangeStart >= queryStart && rangeEnd <= queryEnd) {
        return tree[node];
    }

    return max(query(node*2, rangeStart, getMid(rangeStart, rangeEnd), queryStart, queryEnd),
               query(node*2 + 1, getMid(rangeStart, rangeEnd) + 1, rangeEnd, queryStart, queryEnd));
}

int main()
{
    ios_base::sync_with_stdio(0);
    ll n;
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    build(1, 0, n-1);
    ll m, w, h;
    cin >> m;
    while(m--) {
        cin >> w >> h;
        ll maxInRange = query(1, 0, n-1, 0, w-1);
        cout << maxInRange << endl;
        update(1, 0, n-1, 0, w-1, maxInRange + h);
    }

    return 0;
}
