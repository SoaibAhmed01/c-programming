#include <stdio.h>
#include <string.h>

int main()
{
    char s[21],t[21];
    scanf("%s %s",&s,&t);
    int cmp=strcmp(s,t);
    if(cmp<0)printf("%s\n",s);
    else printf("%s\n",t);

    return 0;
}