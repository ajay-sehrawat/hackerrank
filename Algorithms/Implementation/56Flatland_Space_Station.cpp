//We tried to do it in O(nlogn) 
//Sorting the space stations is important for this solution otherwise it don't work
//Solution ->
/*There are 3 possible cases for max distance:

From left outermost city to first station (just lowest value of stations array);
From right outermost city to last station (n - 1 - (max value of stations array));
From city somewhere in the middle between 2 stations */
 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int no_cities, m, space_station;
    cin>>no_cities>>m;

    int space[m];
    for ( int i=0; i<m; i++ )
    {
        cin>>space[i];
    }
    //insertion sort used
    //Could have done the sort with input also but too lazy to do it.
    int k, key, l;
    for (k = 1; k < m; k++)
    {
        key = space[k];
        l = k - 1;
 
        /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */
        while (l >= 0 && space[l] > key)
        {
            space[l + 1] = space[l];
            l = l - 1;
        }
        space[l + 1] = key;
    }
    int start, ends, temp, count = 0;
    for ( int i=1; i<m; i++ )
    {
        //start = space[i];
        temp = int(ceil((space[i] - space[i-1])/2));
        for ( int j = space[i]; j >= space[i] - temp; j-- )
        {
            ends = space[i] - j;
            if( ends > count )
            {
                count = ends;
            }
        }
    }
    int zero_to_stat = space[0] - 0;
    int end_to_start = ( (no_cities-1) - space[m-1] );
    if ( zero_to_stat > count && zero_to_stat > end_to_start )
    {
        cout<<zero_to_stat;
    }
    else if ( count > zero_to_stat && count > end_to_start )
    {
        cout<<count;
    }
    else {
        cout<<end_to_start;
    }
}
