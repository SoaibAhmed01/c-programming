//Bismillahir Rahmanir Rahim
//Soaib Ahmed...

#include <bits/stdc++.h>

using namespace std;




//Driver code
void solve()
{
    string s;
   int flag=0;
   string word;
   getline(cin,s);
   stringstream ss(s);
   while(ss>>word)
   {
      if(word=="Ratul") 
      {
         cout<<"YES"<<endl;
         flag=1;
         break;
      }
      
      
   }
   if(flag==0) cout<<"NO"<<endl;

    


}

int main()
{
     cin.ignore();
    /*int tc;     cin>>tc;
    while(tc--)
    {
        
    }*/
    solve();
    return 0;
}
