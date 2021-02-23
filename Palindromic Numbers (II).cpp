#include<bits/stdc++.h>
using namespace std;
int main()
{

int  t;
cin>>t;
int cas=0;
while(t--)
{
    string s;
    cin>>s;
    string s1=s;
   // cout<<s1[4]<<endl;
   reverse(s.begin(),s.end());
   if(s1.compare(s)==0)
    cout<<"Case "<<++cas<<": "<<"Yes"<<endl;
   else
    cout<<"Case "<<++cas<<": "<<"No"<<endl;

}
}

