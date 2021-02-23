
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int kase=0;
    while(t--)
    {
        int n;
        cin>>n;
        int a[250][250];
        int dp[250][250];
        memset(a,0,sizeof(a));
        memset(dp,0,sizeof(dp));
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<=i; j++)
            {
                cin>>a[i][j];
            }
        }
        int check=n-1;
        int k;
        for(int i=n,k=n-1; i<2*n-1; i++,k--)
            for(int j=0; j<k; j++)
                cin>>a[i][j];
        dp[0][0]=a[0][0];

        for(int i=0; i<n-1; i++)
            for(int j=0; j<=i; j++)
            {
                dp[i+1][j] = max(dp[i+1][j],a[i+1][j] + dp[i][j]);
                dp[i+1][j+1] = max(dp[i+1][j+1],a[i+1][j+1] + dp[i][j]);
            }

        for(int i=n,k=n-1; i<2*n-1; i++,k--)
            for(int j=0; j<k; j++)
            {
                int  y=max(dp[i-1][j],dp[i-1][j+1]);
                dp[i][j] = a[i][j]+y;
            }

        printf("Case %d: %d\n",++kase,dp[2*n-2][0]);



    }
}

