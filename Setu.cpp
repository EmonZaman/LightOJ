#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,cas=0;
    scanf("%d",&t);
    while(t--)
    {

        int n;
        long long int sum=0;
        cin>>n;
        printf("Case %d:\n",++cas);
        while(n--)
        {
            string s;
            int d;
            cin>>s;

            if(s[0]=='d')
            {
                cin>>d;
                sum=sum+d;
            }


            else
                cout<<sum<<endl;

        }
    }
}

