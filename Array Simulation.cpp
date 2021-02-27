#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);


    int t;



    cin >> t;

    for (int cs = 1; cs <= t; cs++)
    {
        char choice;
        long long x;
        long long y;
    int n;

        int q;
        cin >> n;
        cin >> q;
        int count=0;
        long long int a[n+2];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int k = 0; k < q; k++)
        {

            cin >> choice;
            switch(choice)
            {
            case 'S':
                cin >> x;
                for (int i = 0; i < n; i++)
                {
                    a[i] += x;
                }

                break;

            case 'M':
                cin >> x;
                for (int i = 0; i < n; i++)
                {
                    a[i] *= x;
                }

                break;

            case 'D':
                cin >> x;
                for (int i = 0; i < n; i++)
                {
                    a[i] /= x;
                }

                break;

            case 'R':
                for (int i = 0, j = n-1; i < j; i++, j--)
                {
                    swap(a[i], a[j]);
                }
                break;

            case 'P':
                cin >> x;
                cin >> y;
                swap(a[x], a[y]);
                break;

            }



        }

        printf("Case %d:\n", cs);

        for (int i = 0; i < n; i++)
        {
            printf("%lld", a[i]);
            if(i != n-1)
            {
                printf(" ");
            }

            else
            {
                printf("\n");
            }

        }





    }


}
