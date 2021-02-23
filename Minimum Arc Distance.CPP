#include<bits/stdc++.h>
using namespace std;
int main()
{
        int i,t,cas=0, Ox,Oy,Ax,Ay,Bx,By;
        double angle,s,AB,OB,OA;
        scanf("%d",&t);

        while(t--)
        {
                scanf("%d%d%d%d%d%d",&Ox,&Oy,&Ax,&Ay,&Bx,&By);
                AB = sqrt(pow(Ax-Bx,2)+pow(Ay-By,2));
                OB = sqrt(pow(Ox-Bx,2)+pow(Oy-By,2));
                OA= OB;
                angle = acos((OB*OB + OA*OA-AB*AB)/(2*OB*OA));
                s = OB*angle;
                printf("Case %d: %f\n",++cas,s);



        }
        return 0;




}
