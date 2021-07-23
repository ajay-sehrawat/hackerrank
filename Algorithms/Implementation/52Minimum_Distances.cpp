#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for ( int i=0; i<n; i++ )
    {
        cin>>arr[i];
    }
    int temp = 0;
  //For the if statement min_vallue = 1000;
    int min_value = 1000;
    for ( int i=0; i<n; i++ )
    {
        for ( int j=i+1; j<n; j++ )
        {
            if ( arr[i] == arr[j] )
            {
                temp = j - i;
                if ( temp < min_value )
                {
                    min_value = temp;
                }
            }
        }
    }
    if ( min_value == 1000 )
    {
        cout<<"-1";
    }
    else {
    cout<<min_value;
    }
}
