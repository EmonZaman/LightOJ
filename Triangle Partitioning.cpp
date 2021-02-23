#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int cas=0;
    while(t--)
    {
        float ab,bc,ca,r;
        cin>>ab>>bc>>ca>>r;

        double de=sqrt(r+1);
        double d=sqrt(r);
        //cout<<d/de<<endl;
        double ad=d/de*ab;
        cout<<"Case "<<++cas<<": ";
        cout << std::fixed << std::setprecision(10) << ad<< endl;
    }
    return 0;
}

