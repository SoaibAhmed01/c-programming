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
int solve()
{
    int n;
    cin >> n;
    vi a(n), b(n), c;

    for (int i = 0; i < n; i++)
        cin >> a[i] >> b[i];

    for (int i = 0; i < n; i++)
    {
        c.push_back(b[i]);
        c.push_back(a[i]);
    }
    reverse(c.begin(), c.end());

    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i] << " ";
    }

    return 0;
}

int main()
{
    Faster;
    solve();
    return 0;
}

