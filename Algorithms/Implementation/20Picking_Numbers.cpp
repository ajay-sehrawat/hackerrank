//Picking Numbers
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin>>n; 
    int arr_intial[n];
    int count1 = 0;
    int freq[n];
    int temp=0;
    int arr_final[100];
    int k=0;
    for (int i=0; i<n; i++)
    {
        cin>>arr_intial[i];
        freq[i] = -1;
    }
    //Sorting in ascending order as when difference in next loop should be equal to -1
    //If you use abs it will add extra cases
    for ( int i=0; i<n; i++)
    {
        for ( int j=i+1; j<n; j++)
        {
            if( arr_intial[i] > arr_intial[j] )
            {
                temp = arr_intial[i];
                arr_intial[i] = arr_intial[j];
                arr_intial[j] = temp;    
            }
        }
    }
    for ( int i=0; i<n; i++)
    {
        temp = arr_intial[i];
        if( freq[i] != 0 )
        {
            for ( int j=i+1; j<n; j++)
            {
                if( temp == arr_intial[j] )
                {
                    freq[j] = 0;
                }
            }
        }
    }
    for ( int i=0; i<n; i++)
    {
        temp = arr_intial[i];
        if( freq[i] != 0)
        {
            for (int j=0; j<n; j++)
            {
                if ( (temp - arr_intial[j]) == 0 || (temp - arr_intial[j]) == -1  )
                {
                    count1++;
                }
            }
            arr_final[k] = count1;
            k++;
            count1=0;
        }
    }
    temp = arr_final[0];
    for ( int i=0; i<k; i++)
    {
        if ( temp < arr_final[i] )
        {
            temp = arr_final[i];
        }
    }
    cout<<temp;
}

