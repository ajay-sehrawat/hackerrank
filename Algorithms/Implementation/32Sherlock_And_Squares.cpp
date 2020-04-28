#include <iostream>
using namespace std;
int main()
{
    int noCases;
    cin>>noCases;
    int start[noCases], end[noCases], count = 0;
    int temp = 0;
    for ( int i=0; i<noCases; i++ )
    {
        cin>>start[i]>>end[i];
        for ( int j=0; j<31623; j++ ) // as squre root of 10^9 is 31623
        {
            temp = j*j;   //Forming square root number;
            if ( temp >= start[i] && temp <= end[i] )
            {
                count++;
            }
            else if ( temp > end[i] )
            {
                break;
            }
        }
        cout<<count<<endl;
        count = 0;
    }
}
