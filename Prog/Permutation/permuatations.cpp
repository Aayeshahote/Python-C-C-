#include<iostream>
using namespace std;
void permute(string s, string ans )
{
    if(s.length()==0)
    {
        cout<<ans<<" ";
        return;
    }
    for (int i =0;i<s.length();i++)
    {
        char ch =s[i];
        string left_ele = s.substr(0,i);
        string right_ele = s.substr(i+1);
        string remaining_ele = left_ele+right_ele;
        permute(remaining_ele,ans+ch);
    }
}
int main()
{
    string str;
    string ans=" ";
    cin>>str;
    permute(str,ans);
    return 0;
}
