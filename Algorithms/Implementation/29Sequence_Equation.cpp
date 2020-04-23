//Sequence Equation
#include <iostream>
using namespace std;
int main()
{
    int noElements;
    cin>>noElements;
    int arr[noElements];
    for ( int i=0; i<noElements; i++ )
    {
        cin>>arr[i];
    }
    int temp;
    for ( int i=1; i<=noElements; i++ )
    {
        for ( int k=0; k<noElements; k++)
        {
        if ( i == arr[k] )
        {
            temp = (k+1);
            for ( int j=0 ; j<noElements; j++ )
            {
                if ( temp == arr[j] )
                {
                    cout<<(j+1)<<endl;
                }
            }
        }
        }
    }
}

