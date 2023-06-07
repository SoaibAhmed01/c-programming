#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char a[100001];
    scanf("%s", a);
    int flag = 1;
    int n = strlen(a);
    int i = 0;
    
    while (i < n - 1)
    {
        if (a[i] != a[n - 1])
        {
            flag = 0;
            break;
        }
        i++;
        n--;
    }
    
    if (flag == 0)
        printf("NO");
    else
        printf("YES");

    return 0;
}
