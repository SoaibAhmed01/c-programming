#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1001];
    fgets(s,sizeof(s),stdin);
    int u=0,sp=0,l=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(isupper(s[i]))u++;
        else if(islower(s[i]))l++;
        else if(isspace(s[i]))sp++;
    }
    printf("Capital - %d\n",u);
    printf("Small - %d\n",l);
    printf("Spaces - %d\n",sp);


    return 0;
}
