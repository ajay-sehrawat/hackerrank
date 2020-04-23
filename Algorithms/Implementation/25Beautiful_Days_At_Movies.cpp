//Beautiful Days At The Movies
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int start, end, divisor;
    cin>>start>>end>>divisor;
    int count=0, remainder,original, reversed;
    for ( int i =start; i<=end; i++)
    {
        original = i, reversed=0; //always assign value of i to new variable or you will                                   //get caught in an infinte loop
        while( original != 0 )
        {
            remainder = original%10;
            reversed = (reversed*10)+remainder;
            original = original/10;
        }
        if ( abs(i-reversed)%divisor == 0)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}

