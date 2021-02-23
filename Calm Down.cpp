#include<stdio.h>
#include<math.h>
#define pi acos(-1)


int main()
{
    double R;
    int n,t,cas=0;
    scanf("%d ",&t);
    while(t--)
    {
        scanf("%lf %d", &R, &n);
        double init=sin(pi/n);
        double ans=(R*init)/(1+init);
        cas++;
        printf("Case %d: %0.6lf\n",cas,ans);
    }
    return 0;

}

