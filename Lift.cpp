#include<stdio.h>
int main()
{
    int n,first,last,i=1,temp;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d", &first, &last);
        if(first<=last)
        {
            printf("Case %d: %d\n",i,(last*4)+19);
            i++;
        }
        else
        {
            temp=(first-last);

             printf("Case %d: %d\n",i,((temp+first)*4)+19);
            i++;

        }

    }
    return 0;
}

