#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int tc;
    scanf("%d",&tc);
    int test = 0;
    while (tc--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)scanf("%d",&a[i]);
        int x;
        scanf("%d",&x);
        int pos = -1;
        for (int i=0;i<n;i++) {
            if (a[i]==x) {
                pos=i+1;
                break;
            }
        }
        test++;
        printf("Case %d: ",test);
        if (pos != -1) {
            printf("%d\n",pos);
        } else {
            printf("Not Found\n");
        }



    }
    return 0;
}