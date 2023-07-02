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
void solve()
{
    int n;
    cin >> n;
    ll sum=0,opn=0,got=0;

        for (int i = 0; i < n; i++) 
        {
            int val;
            cin >> val;

            if (val <= 0) 
            {
                if (val < 0)got = 1;
                    
            } 
            else 
            {
                if (got == 1)opn++;
                got = 0;
            }

            if (val < 0)val = -val;
            sum += val;
        }

        if (got == 1)
            opn++;

        cout << sum << sp << opn << nl;


}

int main()
{
    Faster;
    int tc;     cin>>tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}

