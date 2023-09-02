//3n+1 problem
#include<iostream>
using namespace std;

int problem(int i,int j)
{
    int final_count =0;
    for (int n = i ;n<j+1;n++)
    {
        int p = n;
        int count =0;
        while(1)
        {
            count = count +1;
            if (p==1)
                break;
            else if (p%2==0)
                p = p/2;
            else if (p%2 !=0)
                p= (p*3)+1;

        }

        final_count = max(final_count,count);
    }

    return final_count;
}
int main()
{
int i,j;
cin>>i>>j;
cout<<i<<" "<<j<<" "  <<problem(i,j);
}
