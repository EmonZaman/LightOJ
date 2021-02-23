#include<stdio.h>
int main()
{
    int t,a,b,c=0;
    scanf("%d",&t);
    while(t--)
    {
        c++;
        scanf("%d %d", &a, &b);
        printf("Case %d: %d\n",c,a+b);
    }
    return 0;
}
