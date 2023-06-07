//Bismillahir Rahmanir Rahim
//Soaib Ahmed...

#include <bits/stdc++.h>
using namespace std;


//Driver code
int solve()
{
    int a,b;
    string c;
    cin>>a>>c>>b;
    if(a>b && c==">")cout<<"Right"<<endl;
    else if(a>b && c=="<")cout<<"Wrong"<<endl;
    else if(a<b && c==">")cout<<"Wrong"<<endl;
    else if(a<b && c=="<")cout<<"Right"<<endl;
    else if(a==b)cout<<"Right"<<endl;
    else if(a!=b)cout<<"Wrong"<<endl;


}

int main()
{
    solve();
    return 0;
}

