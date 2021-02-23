#include<stdio.h>
int main()
{
    long long int m,n,ans;
    int t,a=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld %lld",&m, &n);
        printf("Case %d: %lld\n",a,(m*n)/2);
        a++;

    }
    return 0;
}

