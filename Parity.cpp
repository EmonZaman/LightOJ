#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    int cas=0;
    while(t--)
    {
        ll n;
        cin>>n;
        int sum=0;
        while(n>0)
        {
            sum=sum+n%2;
            n=n/2;

        }
        if(sum%2==0)
            cout<<"Case "<<++cas<<": "<<"even"<<endl;
        else
             cout<<"Case "<<++cas<<": "<<"odd"<<endl;
    }
}

