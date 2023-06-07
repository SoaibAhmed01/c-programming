#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    int mx=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>mx)mx=a[i];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",mx-a[i]);
    }


    return 0;
}