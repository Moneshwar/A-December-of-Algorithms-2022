#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int n=str.length();
    int i=0;
    while(i<n-1)
    {
        swap(str[i],str[i+1]);
        i=i+2;
    }
    cout<<str;
}