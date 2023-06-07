//Bismillahir Rahmanir Rahim
//Soaib Ahmed...

#include <bits/stdc++.h>

using namespace std;
const int N = 1000000 + 10;
const int   mod    = (int) 1000000007;

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
    


}

int main()
{
    Faster;
    //solve();
    int n;      cin>>n;
    int freq[26]={0};
    for(int i=0;i<n;i++)
    {
        char a;
        cin>>a;
        freq[a-'a']++;
    }
    for(char i='a';i<='z';i++)
    {
        if(freq[i-'a']>0)
        {
            for(int j=0;j<freq[i-'a'];j++)
            {
                cout<<i;
            }
        }
    }
    
    return 0;
}

