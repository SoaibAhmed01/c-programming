#include<stdio.h>


int main()
{
    int x;float p;
    scanf("%d %f",&x,&p);
    float xx=x/100.0;
    float orginal=p/(1-xx);
    printf("%.2f",orginal);


    return 0;
}
