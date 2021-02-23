

#include<iostream>
#include<math.h>
#include<cmath>
//#include<bits/stdc++.h>
#define pi 2*acos(0.0)


using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1;
    while(n--)
    {
        //int i=1;
        double r,circle,square,ans;
       // float pi;
        cin>>r;
        circle=pi*(r*r);
        square=4*(r*r);
        ans=square-circle;
        printf("Case %d: %0.2lf\n",i,ans);
        i++;

    }
    return 0;
}

