#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    int ans=0;
    int count=0;
    for(auto x:str)
    {
        if(x=='a' or x=='e' or x=='i' or x=='o' or x=='u')
        {
            count=0;
        }
        else
        {
            count++;
        }
        ans=max(ans,count);
    }
    if(ans>4)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        solve();
    }
}