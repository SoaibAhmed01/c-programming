//Bismillahir Rahmanir Rahim
//Soaib Ahmed...

#include <bits/stdc++.h>

using namespace std;


//Driver code
class student
{
    public:
    string name;
    int cls ;
    char section ;
    int id,math_marks,eng_marks;
};
int solve()
{
    int n;      cin>>n;
    student list[n];
    for(int i=0;i<n;i++)
    {
        cin>>list[i].name;
        cin>>list[i].cls;
        cin>>list[i].section;
        cin>>list[i].id;
        cin>>list[i].math_marks;
        cin>>list[i].eng_marks;
    }
    for(int i=0;i<n;i++)
   {
        for(int j=i+1;j<n;j++)  
        {
            if((list[i].math_marks+list[i].eng_marks)<(list[j].math_marks+list[j].eng_marks))
            {
                swap(list[i],list[j]);
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)  
        {
            if((list[i].math_marks+list[i].eng_marks)==(list[j].math_marks+list[j].eng_marks))
            {
                if(list[i].id>list[j].id) swap(list[i],list[j]);
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<list[i].name<<" ";
        cout<<list[i].cls<<" ";
        cout<<list[i].section<<" ";
        cout<<list[i].id<<" ";
        cout<<list[i].math_marks<<" ";
        cout<<list[i].eng_marks;
        cout<<endl;
    }

}

int main()
{
    /*int tc;     cin>>tc;
    while(tc--)
    {
        
    }*/
    solve();
    return 0;
}

