#include<stdio.h>
#include<iostream>

#include<stack>

using namespace std;
int main()
{
    int t,check=1;
    scanf("%d", &t);
    while(t--)
    {
        printf("Case %d:\n",check);
        check++;
        string x,y,temp;
        stack<string>s1;
        stack<string>s2;

        x="http://www.lightoj.com/";
        s1.push(x);
        while(cin>>y)
        {
            if(y=="QUIT")break;
            if(y=="VISIT")
            {
                cin>>x;

                cout<<x<<endl;
                s1.push(x);

                if(!s2.empty())
                {
                    while(!s2.empty())
                    {
                        s2.pop();
                    }
                }

            }

            else
            {
                if(y=="BACK")
                {
                    temp=s1.top();
                    s2.push(temp);
                    s1.pop();
                    if(!s1.empty())
                        cout<<s1.top()<<endl;
                    else
                    {
                        cout<<"Ignored"<<endl;
                        temp=s2.top();
                        s1.push(temp);
                        s2.pop();
                    }
                }
                else if(y=="FORWARD")
                {
                    if(!s2.empty())
                    {
                        cout<<s2.top()<<endl;
                        temp=s2.top();
                        s1.push(temp);
                        s2.pop();

                    }


                    else
                    {
                        cout<<"Ignored"<<endl;
                    }





                }
            }



        }

    }
    return 0;


}


