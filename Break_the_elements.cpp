#include <bits/stdc++.h>

#define int long long
#define endl '\n'
#define vec vector<long long>
#define moc map<char, long long>
#define moi map<long long, long long>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)

using namespace std;

void solve() {
    int n;
    cin >> n;
    int a[n], e = 0, o = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] & 1) {
            o++;
        } else {
            e++;
        }
    }
    if(o==0||e==0){
        cout<<0<<endl;
    }
    else{
        cout<<e<<endl;
    }
}

int32_t main() {
    faster;
    int t;
    // freopen("../../input.txt", "r", stdin);
    // freopen("../../output.txt", "w", stdout);
    cin >> t;
    while (t--) {
        solve();
    }
    return (0);
}