//Bismillahir Rahmanir Rahim
//Soaib Ahmed...

#include <bits/stdc++.h>

using namespace std;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define  ll       long long int
#define  ld       long long double
#define  int_out(x) printf("%d",x)
#define  sp       " "
#define  pb       push_back
#define  cinv     for(auto &i:v) cin >> i;
#define  vi       vector<int>
#define  vii      vector<ll>
#define  cout(v)  for(auto e:v) cout << e << sp;
#define  ma_x     100000008
#define  yes      cout << "YES" << endl
#define  no       cout << "NO" << endl
#define  case     "Case " << test++ << ": "
#define  all(v)   v.begin(), v.end()
#define  tst      int tst; int test=1; cin >> tst; while(tst--)
#define  Faster   ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define  nl       "\n"




//Driver code
string checkWinner(const vector<string>& f) {
    for (int i = 0; i < 3; i++) {
        if (f[i][0] != '.' && f[i][0] == f[i][1] && f[i][0] == f[i][2])
            return string(1, f[i][0]);
    }

    for (int j = 0; j < 3; j++) {
        if (f[0][j] != '.' && f[0][j] == f[1][j] && f[0][j] == f[2][j])
            return string(1, f[0][j]);
    }

    if (f[0][0] != '.' && f[0][0] == f[1][1] && f[0][0] == f[2][2])
        return string(1, f[0][0]);

    if (f[0][2] != '.' && f[0][2] == f[1][1] && f[0][2] == f[2][0])
        return string(1, f[0][2]);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (f[i][j] == '.')
                return "DRAW";
        }
    }

    return "DRAW";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        vector<string> f(3);

        for (int i = 0; i < 3; i++)
            cin >> f[i];

        cout << checkWinner(f) << endl;
    }

    return 0;
}
