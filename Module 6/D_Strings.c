#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
      char s[11],t[11], st[11];
      int ns,nt;
       scanf("%s %s",&s,&t);
       ns=strlen(s);
       nt=strlen(t);

       strcpy(st,s);
       strcat(s,t);

       printf("%d %d\n",ns,nt);
       printf("%s\n",s);

       char temp=s[0];
       st[0]=t[0];
       t[0]=temp;
       printf("%s %s\n",st,t);



    return 0;
}
