#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,cas=0;

    cin>>t;
    while(t--)
    {
        int s1=0,s2=0,s3=0,s4=0,s5=0,s6=0,s7=0,s8=0;
        string s;
        cin>>s;
        string p;
        cin>>p;
        int c=0,c1=0;
        for(int i=0; i<s.length(); i++)
        {
            if(c==0)
            {
                if(s[i]=='.')
                {
                    c++;
                    continue;
                }

                int temp=s[i]-48;
                s1=s1*10+temp;
            }
            else if(c==1)
            {
                if(s[i]=='.')
                {
                    c++;
                    continue;
                }

                int temp=s[i]-48;
                s2=s2*10+temp;
            }
            else if(c==2)
            {
                if(s[i]=='.')
                {
                    c++;
                    continue;
                }

                int temp=s[i]-48;
                s3=s3*10+temp;
            }
            else  if(c==3)
            {
                if(s[i]=='.')
                {
                    c++;
                    continue;
                }

                int temp=s[i]-48;
                s4=s4*10+temp;
            }
        }

           s5=(p[7]-48)*1 +(p[6]-48)*2+(p[5]-48)*4+(p[4]-48)*8+(p[3]-48)*16 +(p[2]-48)*32+(p[1]-48)*64+(p[0]-48)*128;
           s6=(p[9]-48)*128 +(p[10]-48)*64+(p[11]-48)*32+(p[12]-48)*16+(p[13]-48)*8 +(p[14]-48)*4+(p[15]-48)*2+(p[16]-48)*1;
           s7=(p[18]-48)*128 +(p[19]-48)*64+(p[20]-48)*32+(p[21]-48)*16+(p[22]-48)*8 +(p[23]-48)*4+(p[24]-48)*2+(p[25]-48)*1;
           s8=(p[27]-48)*128 +(p[28]-48)*64+(p[29]-48)*32+(p[30]-48)*16+(p[31]-48)*8 +(p[32]-48)*4+(p[33]-48)*2+(p[34]-48)*1;

           if(s1==s5 && s2==s6 && s3==s7 && s4==s8)
           printf("Case %d: Yes\n",++cas);
          else
            printf("Case %d: No\n",++cas);



    }


}

