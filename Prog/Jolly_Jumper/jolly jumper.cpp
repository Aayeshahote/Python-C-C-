#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int flag =0;
    for (int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    for (int i =0;i<n-1;i++)
    {
        int diff = abs(arr[i]-arr[i+1]);
        if (diff >=1 && diff <=n-1)
        {
            flag =1;
            continue;
        }
        else
        {
            flag =0;
            break;
        }
    }
    if (flag)
        cout<<"Jolly";
    else
        cout<<"Not jolly";
}
