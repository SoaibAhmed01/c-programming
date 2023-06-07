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


class Student
{
    public:
        string name;
        int cls;
        char section;
        int id;
        void data()
        {
            cin>>name>>cls>>section>>id;
        }
        void revId()
        {
            id=100-id+1;
        }

        void print()
        {
            cout << name << sp << cls << sp << section << sp << id << nl; 
        }

        

};

int main()
{
    Faster;
   // solve();
    int n;  cin>>n;
    Student* students =new Student[n];
    for(int i=0;i<n;i++)students[i].data();

    for (int i=0;i< n/2;i++) 
    {
        swap(students[i].id, students[n - i - 1].id);
    }

    for(int i=0;i<n;i++)students[i].print();

    delete[] students;
    return 0;
}

