//Circular Array Rotation
#include <iostream>
using namespace std;
int main()
{
    int noElements, rotateCount, noQueries;
    cin>>noElements>>rotateCount>>noQueries;
    int arr[noElements], arr2[noElements];
    int temp1, temp2 =0;
    for ( int i=0; i<noElements; i++ )
    {
        temp1 = i;
        cin>>arr[i];
        if ( temp1 + rotateCount >= noElements)
        {
            temp2 = (temp1 + rotateCount)%noElements;
            arr2[temp2] = arr[i];
        }
        else
        {
            arr2[temp1 +rotateCount] = arr[i];
        }
        temp2 = 0;
    }
    int queries;
    //Input of output place
    for( int i=0; i<noQueries; i++ )
    {
        cin>>queries;
        cout<<arr2[queries]<<endl;
    }
}

