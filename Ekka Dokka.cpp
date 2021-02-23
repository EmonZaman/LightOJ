#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int i=1;
    while(t--)
    {
        long long w,n,m;
        cin>>w;
        if(w%2!=0)
            cout<<"Case "<<i<<": Impossible"<<endl;
        else
        {
            n=1;
            while(w%2==0)
            {
                n*=2;
                w/=2;
            }
            cout<<"Case "<<i<<": "<<w<<" "<<n<<endl;


        }
        i++;
    }
}

