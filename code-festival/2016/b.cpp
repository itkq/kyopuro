#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
#include <map>
#include <list>
#include <stack>
#include <queue>
#include <utility>
#include <algorithm>
#include <functional>
#include <cassert>

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) for(int i=0;i<n;i++)
#define DEBUG(x) cout<<#x<<": "<<x<<endl;
#define ALL(a) (a).begin(),(a).end()

#define pb push_back

using namespace std;
typedef unsigned long ul;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vii;

int main() {
    int n;
    cin >> n;
    vi a(n);
    map<int, bool> mp;
    REP(i,n) {
        int b;
        cin >> b;
        a[i] = b-1;
    }
    int cnt = 0;
    REP(i,n) {
        if (a[a[i]] == i && !mp[i]) {
            cnt++;
            mp[i] = mp[a[i]] = true;
        }
    }
    cout << cnt << endl;
}
