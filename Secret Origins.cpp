#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int test=0;
    while(t--)
    {
        int n;
        cin>>n;
        stack<int>q;
        vector<int> vec;


       int ans=n;
        while(n!=0)
        {
            int push=n%2;

            q.push(push);
            n=n/2;
        }
         q.push(0);
        int ch=q.size();
        for(int i=0; i<ch; i++)
        {
            vec.push_back(q.top());
            // cout<<q.top()<<endl;
            q.pop();

        }





        //cout<<vec.size()<<endl;
       //  for(int i=0;i<vec.size();i++)
          //  cout<<vec[i]<<" ";
           // cout<<endl;
        next_permutation(vec.begin(),vec.end());
       // cout<<vec.size()<<endl;
      //  for(int i=0;i<vec.size();i++)
           // cout<<vec[i]<<" ";
       // cout<<endl;
        int cnt=0;
        long long int sum=0;
        int c=0;
        for(int i=ch-1; i>=0; i--)
        {
            if(vec[cnt]==1)
            {
                sum+=pow(2.0,i);
                c++;
            }
            cnt++;
          //  cout<<sum<<endl;
        }


        cout<<"Case "<<++test<<": "<<sum<<endl;



    }

    return 0;
}
