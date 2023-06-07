//Bismillahir Rahmanir Rahim
//Soaib Ahmed...

#include <bits/stdc++.h>
using namespace std;


//Driver code
int solve()
{
    int a,b,c,res;
    string d,e;
    cin>>a>>d>>b>>e>>c;
    if(d=="+")res=a+b;
    else if(d=="-")res=a-b;
    else if(d=="*")res=a*b;
    if(res==c)cout<<"Yes"<<endl;
    else cout<<res<<endl;


}

int main()
{
    solve();
    return 0;
}

