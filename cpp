

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double calculateCharges( double );
int main()
{
    double hour;
    double currentCharges;
    double totalCharges=0;
    double totalHours=0;
    bool first = true;
    
    cout<< fixed;
    cout<<"Enter the hours parked for 3 cars: \n";
    
    for( int i = 1 ; i <=3 ; i++)
    {
        cin>> hour;
        totalHours+= hour;
        
        if(first)
        {
            cout<< setw(5)<<"Car"<<setw(15)<<"hours"<<setw(15)<<"Charge \n";
            first=false;
        }
        currentCharges= calculateCharges( hour );
        totalCharges += currentCharges;
        cout<< setw(14)<<setprecision(2)<<calculateCharges(hour)<<"\n    ";
    }
    cout<<setw(7)<<"TOTAL" <<setw(13)<<setprecision(1)<<totalHours<<setw(14)<<setprecision(2)<<totalCharges;
}
double calculateCharges(double hours)
{
    double charge;
    if(hours <3.0)
        charge=2.0;
    else
        charge =2.0+ .5* ceil(hours - 3.0);
    return (charge > 10.0 ? 10.0 : charge );
