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
bool flag(ll n, ll m)
{
    if (m == n)
        return true;
    if (m > n or n % 3 != 0)
        return false;
    return flag(n / 3, m) or flag(n - n / 3, m);
}

void solve()
{
    ll n, m;
    cin >> n >> m;
   if (flag(n, m)) yes;
   else no;
}

int main()
{
    Faster;
    int tc;
    cin >> tc;
    int test = 1;
    while (tc--)
    {
        solve();
    }
    return 0;
}
