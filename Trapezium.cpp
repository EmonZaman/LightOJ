#include<stdio.h>
#include<math.h>
int cas;
int main()
{

    double a,b,c,d,e,f,s,area,h,ans,t;

    scanf("%lf",&t);

    while(t--)
    {

        scanf("%lf%lf%lf%lf",&a,&b,&c,&d);

        if(a>c)
        {
            e=a-c;
        }

        else
        {
            e=c-a;
        }
        f=d;
        s=(f+e+b)/2;
        area=(s-f)*(s-e)*(s-b);
        area=s*area;
        area=sqrt(area);
        h=(area*2)/e;
        ans=((a+c)*h)/2;
        cas++;
        printf("Case %d: %lf\n",cas,ans);


    }
    return 0;
}
