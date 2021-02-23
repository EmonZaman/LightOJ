#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int cas=0;
    while(t--)
    {

        int a,b,c;
        cin>>a>>b>>c;
//       int  mx=max(a,b);
//        cin>>c;
//        mx=max(mx,c);
        if((c*c)==(a*a)+(b*b))
            cout<<"Case "<<++cas<<": yes"<<endl;
       else if((a*a)==(b*b)+(c*c))
            cout<<"Case "<<++cas<<": yes"<<endl;
       else if((b*b)==(c*c)+(a*a))
            cout<<"Case "<<++cas<<": yes"<<endl;
        else

            cout<<"Case "<<++cas<<": no"<<endl;

    }
}

