#include <iostream>
using namespace std;
int main()
{
    //Taking Inputs
    int rday, rmonth, ryear;
    cin>>rday>>rmonth>>ryear;  //rday as return_day
    int eday, emonth, eyear;
    cin>>eday>>emonth>>eyear;  //eday as expcted_return_day
//Using If else statement for code
    if ( ryear > eyear )
    {
        cout<<"10000";
    }
    else
    {
        if ( (rmonth > emonth) && (ryear == eyear) ) 
        { 
            cout<<(rmonth-emonth) * 500; 
        }
        else
        {
            if( (rday > eday) && (rmonth == emonth) ) //for end dated
            {
                if ( ryear == eyear )   //for end dates
                cout<<(rday-eday) * 15;
                else
                cout<<"0";
            }
            else 
            {
                cout<<"0"; 
            }
        }
    }
}

