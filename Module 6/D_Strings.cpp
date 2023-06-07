#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[11], t[11],st[11];
    int ns, nt;

    cin >> s >> t;
    ns = strlen(s);
    nt = strlen(t);
    strcpy(st,s);

    strcat(s, t);
    cout << ns << " " << nt << endl;
    cout << s << endl;

    char temp = st[0];
    st[0] = t[0];
    t[0] = temp;
    cout << st << " " << t << endl;

    return 0;
}