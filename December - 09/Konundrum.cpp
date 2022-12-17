#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> str;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string temp;
        cin>>temp;
        str.push_back(temp);
    }
    int ans=-1;
    int Len=0;
    for(int i=0;i<n;i++)
    {
        string x=str[i];
        if((x.length()%2)!=0 and x.length()>Len)
        {
            Len=x.length();
            ans=i;
        }
    }
    if(ans==-1)
    {
        cout<<"Better luck next time";
    }
    else
    {
        cout<<str[ans];
    }
}