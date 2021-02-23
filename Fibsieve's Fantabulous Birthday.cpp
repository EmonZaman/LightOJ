#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,cas=0;;
    cin>>t;
    while(t--)
    {
        long long int in,x,y,temp;
        cin>>in;
        double  sq= ceil(sqrt(in));
        long long int d=sq*sq-in;
        if(d<sq)
        {
            y=sq;
            x=d+1;

        }
        else
        {
            x=sq;
            y=in-(sq-1)*(sq-1);
        }
        if((int)sq%2==0)
        {
            temp=x;
            x=y;
            y=temp;

        }
       cout<<"Case "<<++cas<<": "<<x<<" "<<y<<endl;

    }
}

