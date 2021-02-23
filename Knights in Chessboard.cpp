
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,t,cas=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d", &m, &n);
        int mini=min(m,n);
        int maxx=max(m,n);
        if(mini==1)
            printf("Case %d: %d\n",++cas,maxx);
        else if(mini==2)
        {
            if(maxx%4==1 || maxx%4==3)
                maxx++;
            else if(maxx%4==2) maxx+=2;
            printf("Case %d: %d\n",++cas,maxx);
        }
        else if((m*n)%2==0)
            printf("Case %d: %d\n",++cas,m*n/2);
        else
            printf("Case %d: %d\n",++cas,(m*n/2)+1);


    }
    return 0;


}

