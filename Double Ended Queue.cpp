#include<stdio.h>
#include<iostream>
#include<deque>
using namespace std;

int main()
{
    int t,caseno=0,n,m,a;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d", &n, &m);
        string x;
        deque <int> q;
        cout<<"Case "<<++caseno<<":\n";
        while(m--)
        {
            cin>>x;
            if(x=="pushLeft" ||x=="pushRight")
            {
                cin>>a;
                if(q.size()==n)
                {
                    cout<<"The queue is full"<<endl;

                }
                else if(x=="pushLeft")
                {
                    cout<<"Pushed in left: "<<a<<endl;
                    q.push_front(a);
                }
                else if(x=="pushRight")
                {
                    cout<<"Pushed in right: "<<a<<endl;
                    q.push_back(a);
                }
            }
            if(x=="popLeft"||x=="popRight")
            {
                if(q.size()==0)
                {
                    cout<<"The queue is empty"<<endl;
                }
                else
                {
                    if(x=="popLeft")
                    {
                        cout<<"Popped from left: "<<q.front()<<endl;
                        q.pop_front();

                    }
                    if(x=="popRight")
                    {
                        cout<<"Popped from right: "<<q.back()<<endl;
                        q.pop_back();
                    }
                }
            }

        }


    }
}


