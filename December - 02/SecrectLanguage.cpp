
#include<bits/stdc++.h>
using namespace std;
string SecrectLanguage(string str)
{
    string ans="";
    int last=str.length()-4;
    ans+=str[last];
    ans+=str[++last];
    for(int i=0;i<str.length()-4;i++)
        ans+=str[i];
    return ans;
}
int main()
{
    string str="kipediawiae";
    cout<<SecrectLanguage(str)<<endl;
    str="ammargrae";
    cout<<SecrectLanguage(str);
    return 0;
}