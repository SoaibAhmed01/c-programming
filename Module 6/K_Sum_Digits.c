#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    int sum=0;

     for (int i = 0; i < n; i++) {
        char c;
        scanf("%c", &c);
        sum += c - '0';
    }
    printf("%d",sum);

    return 0;
}