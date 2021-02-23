
#include<stdio.h>
int main()
{
    int t,n,ans1,ans2;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        ans1=n/2;
        ans2=n-ans1;
        printf("%d %d\n",ans1,ans2);
    }
    return 0;
}
