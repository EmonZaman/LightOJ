#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int divison(int n)
{
    ll sub;
    if(n==0)
        return 0;
    else if(n%3==0)
        sub=n/3;
    else
        sub=(n/3)+1;
    return n-sub;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    int test=0;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        ll ans=divison(b)-divison(a-1);
        printf("Case %d: %lld\n", ++test, ans);
    }
}
