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
    int n,k;        cin>>n>>k;
    if(n<k)no;
    else if(k==1)
    {
        yes;
        cout<<n<<nl;
    }
    else if(n%2==0)
    {
        if(k%2==0)
        {
            yes;
            for(int i=1;i<k;i++) cout<<1<<sp;
            cout<<n-(k-1)<<nl;
        }
        else if(k*2<=n)
        {
            yes;
            for(int i=1;i<k;i++) cout<<2<<sp;
            cout<<n-(k-1)*2<<nl;
        }
        else no;
    }
    else 
    {
        if(k%2==1)
        {
            yes;
            for(int i=1;i<k;i++) cout<<1<<sp;
            cout<<n-(k-1)<<nl;
        }
        else no;
    }

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

