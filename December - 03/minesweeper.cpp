
#include<bits/stdc++.h>
using namespace std;
vector<vector<char>> MineSweeperFormer(vector<vector<char>>& Bomb)
{
    for(int i=0;i<Bomb.size();i++)
    {
        for(int j=0;j<Bomb.size();j++)
        {
            if(Bomb[i][j]=='#')
            {
                if(j-1 >=0)
                {
                    if(Bomb[i][j-1]=='-')
                        Bomb[i][j-1]='1';
                    else if(Bomb[i][j-1]!='#')
                        Bomb[i][j-1]+=1;
                    if(i-1>=0)
                    {
                        if(Bomb[i-1][j-1]=='-')
                            Bomb[i-1][j-1]='1';
                        else if(Bomb[i-1][j-1]!='#')
                            Bomb[i-1][j-1]+=1;
                        if(Bomb[i-1][j]=='-')
                            Bomb[i-1][j]='1';
                        else if(Bomb[i-1][j]!='#')
                            Bomb[i-1][j]+=1;
                        if(j+1<Bomb.size())
                        {
                            if(Bomb[i-1][j+1]=='-')
                                Bomb[i-1][j+1]='1';
                            else if(Bomb[i-1][j+1]!='#')
                                Bomb[i-1][j+1]+=1;

                        }
                    }
                }
                if(j+1<Bomb.size())
                {
                    if(Bomb[i][j+1]=='-')
                        Bomb[i][j+1]='1';
                    else if(Bomb[i][j+1]!='#')
                        Bomb[i][j+1]+=1;
                    if(i+1>0)
                    {
                        if(Bomb[i+1][j-1]=='-')
                            Bomb[i+1][j-1]='1';
                        else if(Bomb[i+1][j-1]!='#')
                            Bomb[i+1][j-1]+=1;
                        if(Bomb[i+1][j]=='-')
                            Bomb[i+1][j]='1';
                        else if(Bomb[i+1][j]!='#')
                            Bomb[i+1][j]+=1;
                    }
                }

            }
        }
    }
}
int main()
{
    string str="kipediawiae";
    cout<<SecrectLanguage(str)<<endl;
    str="ammargrae";
    cout<<SecrectLanguage(str);
    return 0;
}