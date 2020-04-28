#include <iostream>
using namespace std;
int main()
{
    int noSticks;
    cin>>noSticks;
    int sticks[noSticks];
    for ( int i=0; i<noSticks; i++ )
    {
        cin>>sticks[i];
    }
    int temp;
    //Sorting Array in ascending order;
    for ( int i=0; i<noSticks; i++ )
    {
        for ( int j=i+1; j<noSticks; j++)
        {
            if ( sticks[i] > sticks[j] )
            {
                temp = sticks[i];
                sticks[i] = sticks[j];
                sticks[j] = temp;
            }
        }
    }
    int count = 0;
    //Now picking the smallest number and subtraction it from every one
    for ( int i=0; i<noSticks; i++ )
    {
        if ( sticks[i] != 0 ) //Eliminating the possibility of 0;
        temp = sticks[i];
        else
        continue;
        for ( int j=i; j<noSticks; j++ )
        {
            sticks[j] = sticks[j] - temp; //subtracting smallest number
            count++;
        }
        cout<<count<<endl;
        count = 0;
    }
}
