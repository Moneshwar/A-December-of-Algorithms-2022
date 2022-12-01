#include<bits/stdc++.h>
using namespace std;
int hexaConverter(string str)
{
    return stoi(str,0,16);
}
string WilliamButcherMission(vector<vector<string>> & hex)
{
    string ans="";
    for(int i=0;i<hex.size();i++)
    {
        for(auto &x:hex[i])
        {
            ans+=hexaConverter(x);
        }
        if(i!=hex.size()-1)
        {
            ans+=" ";
        }
    }
    return ans;
}
int main()
{
    vector<vector<string>> input1={ {"56", "6F", "75", "67", "68", "74"}};
    cout<<WilliamButcherMission(input1)<<endl;
    vector<vector<string>> input2={{ "49", "6E", "76", "61", "64", "65"}, {"4D", "69", "6C", "69", "74", "61", "72", "79"}};
    cout<<WilliamButcherMission(input2)<<endl;
    return 0;
}