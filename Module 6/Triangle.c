#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>0 && a==b && b==c) printf("Yes\n");
    else printf("No");
    return 0;
}