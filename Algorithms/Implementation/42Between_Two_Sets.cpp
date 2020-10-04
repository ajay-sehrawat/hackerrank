#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //Input of size of array
    int ar1, ar2;
    scanf("%d%d",&ar1,&ar2);

    int arr1[ar1], arr2[ar2];
    //Taking input of arrays
    for ( int i=0; i<ar1; i++ )
    {
        scanf("%d", &arr1[i]);
    }
    //Second Array
    for ( int i=0; i<ar2; i++)
    {
        scanf("%d",&arr2[i]);
    }
    //Taking last elemnt of 1st array and first of 2nd array and then
    //dividing each element of array with those between numbers and finding common
    int temp1,temp2, count = 0;
    for ( int i=arr1[ar1-1]; i<=arr2[0]; i++ )
    {
        temp1 = 0;
        temp2 = 0;
        for ( int j =0; j<ar1; j++ )
        {
            if ( i%arr1[j] != 0 )
            {
                    temp1 = 1;
            }
        }
        if (temp1 == 0)
        {
            for (int k = 0; k<ar2; k++ )
            {
                if( arr2[k]%i != 0)
                {
                    temp2 = 1;
                    break;
                }
            }
        }
        if ( temp1 == 0 && temp2 ==0 )
            count++;
    }
    printf("%d",count);
}




