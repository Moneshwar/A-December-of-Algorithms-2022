#include<bits/stdc++.h>
using namespace std;
int main()
{
    int income=50000;
    int maxAmountForFuel=5000;
    int fuelPrice;
    cout<<"fuel_Price:";
    cin>>fuelPrice;
    int Price=0;
    int perDayFuelPrice=2*fuelPrice;
    for(int i=1;i<=31;i++)
    {
        if(i%3==0)
            Price+=6;
        if(i%5==0)
            Price-=4;
        Price+=perDayFuelPrice;
    }
    cout<<"Expenditure="<<Price<<endl;
    if(Price>maxAmountForFuel)
        cout<<"EXPENDITURE EXCEEDING LIMIT"<<endl;
    else
        cout<<"EXPENDITURE WITHIN LIMIT"<<endl;
    return 0;
        
}