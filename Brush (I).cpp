#include<stdio.h>
int main()
{
    int a[1001],t,n,ca=1,sum,x,k;
    scanf("%d\n",&t);

    while(t--)
    {

        sum=0;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d ",&a[i]);
            if(a[i]>=0)
            {
                   sum=sum+a[i];
            }

        }
        printf("Case %d: %d\n",ca,sum);


        ca++;
    }
    return 0;

}

