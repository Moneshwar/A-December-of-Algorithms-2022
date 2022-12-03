/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<bits/stdc++.h>
using namespace std;
void  Industry(vector<int>& stocks)
{
    int ans=INT_MIN;
    int start=0,end=0,sum=0;
    for(int i=0;i<stocks.size();i++)
    {
        sum+=stocks[i];
        if(sum>ans)
        {
            ans=sum;
            end=i;
        }
        if(sum<0)
        {
            sum=0;
            start=i+1;
        }
    }
    cout<<"Profit Value: "<<ans<<endl;
    cout<<"Proposed days to sell: Day: "<<start+1 <<"to Day: "<<end+1<<endl;
    cout<<"Stock market Change Values: { ";
    for(int i=start;i<=end;i++)
    {
        cout<<stocks[i]<<" ";
    }
    cout<<"}"<<endl;

}
int main()
{
    vector<int> a={ 5,4,-1,7,8};
    vector<int> b={ 5,-4,12,-2, -5, 6, -2,-3, 1, 5, -6,-11,7,-31,9,2,-3,8,-5 };
    Industry(a);
    Industry(b);
    return 0;
}