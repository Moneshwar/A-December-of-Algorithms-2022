#include <bits/stdc++.h>
using namespace std;
void MonkeyJumps(vector<char> &path,vector<int> &jump)
{
    int i=0;
    int count=0;
    for(auto x:jump)
    {
        i=i+x;
        if(i>=path.size())
            break;
        if(path[i]=='~')
            break;
        count++;
    }
    cout<<count;
}
int main() {
    // int n;
    // cin>>n;
    vector<char> v({'_','~','_','_','_','_','~','_','_','~','_','~'});
    // for(int i=0;i<n;i++)
    // {
    //     char t;
    //     cin>>t;
    //     v.push_back(t);
    // }
    vector<int> jump={2,1,1,1,2,1,2,1};
    // for(int i=0;i<n;i++)
    // {
    //     int x;
    //     cin>>x;
    //     jump.push_back(x);
    // }
    MonkeyJumps(v,jump);
    return 0;
}