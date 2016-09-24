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

char conv(char s, int n) {
    int i = s - 'a';
    i = (i+n) % 26;

    return (char)('a' + i);
}

int main() {
    string s; long long K;
    cin >> s >> K;

    for (int i = 0; i < s.size(); i++) {
        ll d;
        if (s[i] != 'a' && (d = 'z' - s[i] + 1) <= K) {
            s[i] = 'a';
            K -= d;
        }
    }
    if (K > 0) {
        s[s.size()-1] = conv(s[s.size()-1], K);
    }
    cout << s << endl;
}
