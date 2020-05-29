//Equalize The Array
//We first find the number with maximum frequency and then subtract that frequency from total elements;
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int noElements, temp, count = 0, temp2 = 0;
    cin>>noElements;
    int arr[noElements];
    int freq[noElements];
    for ( int i=0; i<noElements; i++ )
    {
        cin>>arr[i];
        freq[i] = -1;
    }
    //
    for ( int i=0; i<noElements; i++ )
    {
        if ( freq[i] != 0 )
        {
            temp = arr[i];
            for ( int j=i+1; j<noElements; j++ )
            {
                if ( temp == arr[j] )
                {
                    freq[j] = 0;
                }
             }
        }
    }
    for ( int i=0; i<noElements; i++ )
    {
        if ( freq[i] != 0)
        {
            temp = arr[i];
            for ( int j=0; j<noElements; j++ )
            {
                if ( temp == arr[j] )
                count++;
            }
            if ( temp2 < count )
            {
                temp2 = count;
            }
            count = 0;
        }
    }
    cout<<(noElements-temp2);
}

