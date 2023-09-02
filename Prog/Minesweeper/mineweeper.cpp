//Mine weeper
//Practical no -2
#include<iostream>
using namespace std;
int main()
{
    int field =1;
    while(1)
    {
        int m,n;
        cin>>m>>n;
        if (m==0 && n==0)
            break;
        else
        {
            char input[m][n];
            char output[m][n];
            int count =0;
            cout<<"\n";
            for (int i =0;i<m;i++)
            {
                for (int j =0;j<n;j++)
                {
                    cin>>input[i][j];
                }

            }
            for (int i =0;i<m;i++)
            {
                for (int j =0;j<n;j++)
                {
                    count =0;
                    if (input[i][j] =='*')
                    {
                        output[i][j]='*';
                    }
                else
                {
                    if (input[i-1][j-1] =='*' && (i-1)>=0 && (j-1)>=0)
                        count = count +1;

                    if (input[i-1][j] =='*' && (i-1)>=0)
                        count = count +1;

                    if (input[i-1][j+1]=='*' && (i-1)>=0 && (j+1)<=n-1)
                        count = count +1;

                    if (input[i][j-1] =='*' && (j-1)>=0)
                        count = count +1;

                    if (input[i][j+1] =='*' && (j+1)<=n-1)
                        count = count +1;

                    if (input[i+1][j-1]=='*' && (i+1)<= m-1 && (j-1)>=0)
                        count = count +1;

                    if (input[i+1][j]=='*' && (i+1)<=m-1)
                        count = count +1;

                    if (input[i+1][j+1] =='*'&& (i+1)<=m-1 && (j+1)<=n-1)
                        count = count +1;

                    output[i][j]=(char)count;

                }
                }
            }
            cout<<"\nField #"<<field;
            field++;
            cout<<"\n";
            for (int i =0;i<m;i++)
            {
                for (int j =0;j<n;j++)
                {
                    if (output[i][j] !='*')
                    {
                        int n = (int)output[i][j];
                        cout<<n<<" ";
                    }
                    else
                        cout<<output[i][j]<<" ";
                }
                    cout<<"\n";


            }
            cout<<"\n";
        }

    }

}



