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
#define mp make_pair

using namespace std;
typedef unsigned long ul;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vii;

int main() {
    ll h, w, n;
    cin >> h >> w >> n;
    map<pair<int, int>, int> m;
    int D[3]={-2,-1,0};
    ll hb = h-2;
    ll wb = w-2;
    REP(i,n){
        ll a,b;
        cin >> a >> b;
        a--; b--;
        REP(j,3){
            REP(k,3){
                ll c = a + D[j];
                ll d = b + D[k];

                if (c >= 0 && d >= 0 && c < hb && d < wb && a-c<3 && b-d<3) {
                    m[mp(c,d)]++;
                }
            }
        }
    }
    vector<long long> res = vector<long long>(10, 0);
    ll sum = 0;
    for (auto mm : m){
        res[mm.second]++;
        sum++;
    }
    res[0] = (hb*wb)-sum;

    for (auto a : res){
        cout << a << endl;
    }
}
