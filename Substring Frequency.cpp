#include<bits/stdc++.h>
using namespace std;


int main()
{

    int n;
    cin>>n;
    for(int cas=1;cas<=n;cas++)
    {
        string s;
        cin>>s;
        string a;
        cin>>a;

        int index=0,j=1;
         vector<int>vec(a.size());
        for(int j=1;j<a.size(); )
        {
            //cout<<"end"<<endl;
            if(a[index]==a[j])
            {
                vec[j]=index+1;
                j++;
                index++;
            }
            else{
                    if(index!=0)

                    {
                        index--;
                        index=vec[index];
                    }
                    else
                        j++;


            }

        }
        int c=0,ans=0;
        for(int i=0;i<s.size(); )
          {
              if(s[i]==a[c])
              {
                  i++;
                    c++;
              }
             else
             {
                 if(c!=0)
                 {
                     c--;
                     c=vec[c];
                 }
                 else
                 {
                     i++;
                 }
             }
             if(c==a.size())
             {
                 ans++;
             }
          }
          cout<<"Case "<<cas<<": "<<ans<<endl;
    }

}
