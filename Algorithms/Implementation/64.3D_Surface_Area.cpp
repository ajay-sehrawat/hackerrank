#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h, w;
    cin>>h>>w;
    int arr[h][w];
    for ( int i=0; i<h; i++ )
    {
        for ( int j=0; j<w; j++ )
        {
            cin>>arr[i][j];
        }
    }
    
    //Solution Starts here
    int sum = 0;
    sum = 2 *(h*w); // for top and bottom;
    //front
    for ( int i=0; i<h; i++ )
    {
        sum  += arr[i][0];
    }
    //back
    for ( int i=0; i<h; i++ )
    {
        sum += arr[i][w-1];
    }
    //right
    for ( int i=0; i<w; i++ )
    {
        sum += arr[h-1][i];
    }
    //left
    for ( int i=0; i<w; i++ )
    {
        sum += arr[0][i];
    }

    
    //Now for up_down complex stairs type area
    for ( int i=0; i<h; i++ )
    {
        for ( int j=0 ;j<w-1; j++ )
        {
            sum += abs(arr[i][j] - arr[i][j+1]);
        }
    }
    for ( int i=0; i<w; i++ )
    {
        for ( int j=0; j<h-1; j++ )
        {
            sum += abs(arr[j][i] - arr[j+1][i]); 
        }
    }
    cout<<sum;
    
}
