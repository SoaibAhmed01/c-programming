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
    int n,a,b,c,temp,ans;
    cin>>n;
    c=b=a=INT_MAX;
    string s;
    for(int i=0;i<n;i++)
    {
        cin>>temp>>s;
        if(s=="01")a=min(a,temp);
        else if(s=="10")b=min(b,temp);
        else if(s=="11")c=min(c,temp);
    }
    if(a==INT_MAX or b==INT_MAX)ans=min(INT_MAX,c);
    else ans=min(a+b,c);
    if(ans==INT_MAX)cout<<-1<<nl;
    else cout<<ans<<nl;
}

int main()
{
    Faster;
    int tc;
    cin>>tc;
    while (tc--)
    {
        solve();
    }
    
    return 0;


}

