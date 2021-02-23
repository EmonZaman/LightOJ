

#include<bits/stdc++.h>
using namespace std;
char s[21][21];
int cnt;
int w,h;
int dfs(int i, int j)
{

    if(s[i][j-1]=='.'&&j - 1 >= 0)
    {
       // cout<<"left"<<endl;
        cnt++;
        s[i][j-1]='#';
        dfs(i,j-1);
        //cout<<"left"<<endl;
    }
    if(s[i][j+1]=='.'&&j + 1 < w)
    {
       // cout<<"right"<<endl;
        cnt++;
        s[i][j+1]='#';
       // cout<<i<<j<<endl;
        dfs(i,j+1);

    }
    if(s[i+1][j]=='.'&&i + 1 < h)
    {
       //cout<<"down"<<endl;
        cnt++;
        s[i+1][j]='#';
        dfs(i+1,j);

    }
    if(s[i-1][j]=='.'&&i - 1 >= 0)
    {
      // cout<<"up"<<endl;
        cnt++;
        s[i-1][j]='#';
        dfs(i-1,j);

    }


}

int main()
{
    int t;
    cin>>t;
    int cas=0;
    int k=1;

    while(k<=t)
    {

        cin>>w>>h;
        int row,column;


        for(int i=0;i<h;i++)
        {
            for(int j=0;j<w;j++)
            {
                cin>>s[i][j];
                if(s[i][j]== '@')
                {

                    row=i;
                    column=j;
                    s[row][column]='#';

                }
            }
        }

        //cout<<"row column"<<row<<column<<endl;
        cnt=1;

         dfs(row,column);
        cout<<"Case "<<++cas<<": "<<cnt<<endl;
        k++;

    }
}
