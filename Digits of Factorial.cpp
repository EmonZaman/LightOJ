#include<stdio.h>
#include<math.h>
#define n 1000000
double logsum[n];


int factorialsum()
{
    for(int i=1; i<=n; i++)
    {
        logsum[i]=logsum[i-1]+log(i);

    }

}
int main()
{



    factorialsum();
     int ans,casee=1,t,m,base;


    scanf("%d",&t);



    while(t--)
    {
        scanf("%d %d",&m, &base);
        ans=(logsum[m]/log(base))+1;
        printf("Case %d: %d\n",casee,ans);
        casee++;

    }
    return 0;

}

