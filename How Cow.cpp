#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int cse=0;
    while(t--)
    {
        cout<<"Case "<<++cse<<":"<<endl;
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        int qur;
        cin>>qur;
        while(qur--)
        {
            int q,r;
            cin>>q>>r;
            if((q>=x1 &&q<=x2) && (r>=y1 &&r<=y2))
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
    return 0;
}

