//Magic Square
//General formula of magic squuare is the M = n(n^2+1)/2  n=no_of_rows
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int arr[3][3];
    int m;    //magic square
    m = 3*(pow(3,2)+1)/2;
    for( int i=0; i<3; i++)
    {
        for ( int j=0; j<3; j++)
        {
            cin>>arr[i][j];
        }
    }
    int sum = 0;
    int corct[3];
    for ( int i=0; i<3; i++)
    {
        for ( int j=0; j<3; j++)
        {
            sum = sum + arr[i][j];
        }
        if ( sum < m )
        {
            corct[i] = m - sum;
        }
        else if( sum > m)
        {
            corct[i] = sum - m;
        }
        sum = 0;
    }
    int sum2=0;
    for ( int i=0; i<3; i++)
    {
        sum2 = sum2 + corct[i];
    }
    cout<<sum2;
    return 0;
}

