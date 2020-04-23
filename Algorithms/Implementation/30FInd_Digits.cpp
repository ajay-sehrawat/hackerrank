//Find Digits
#include <iostream>
using namespace std;
int main()
{
    int noCases;
    cin>>noCases;
    int integer[noCases];
    int remainder, quotient, count =0;
    for ( int i=0; i<noCases; i++ )
    {
        cin>>integer[i];
        quotient = integer[i];
        while ( quotient != 0 )
        {
            remainder = quotient%10;
            if ( remainder != 0)
            {
                if( (integer[i]%remainder) == 0 )
                {
                    count++;
                }
            }
        quotient = quotient/10;
        }
        cout<<count<<endl;
        count = 0;
    }
}
