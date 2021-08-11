#include <bits/stdc++.h>

using namespace std;
//We have to check four cases in this question;
//lesft, right, up down thats why it auto neglect the boundary cases as they can't
//be greater than what don't exist
//So thats whi we used loops for "1" to "n-1"
//The input given is in char array form by the problem maker.
int main()
{
    int n;
    cin>>n;
    char cavity[n][n];
    //taking input as char one word at a time.
    for ( int i=0; i<n; i++ )
    {
        for ( int j=0; j<n; j++ )
        {
            cin>>cavity[i][j];
        }        
    }
    for ( int i=1; i<n-1; i++ )
    {
        for ( int j=1; j<n-1; j++ )
        {
            //To check left and right
            if ( cavity[i][j] > cavity[i][j+1] && cavity[i][j] > cavity[i][j-1] ) 
            {
                //to check up and down
                if ( cavity[i][j] > cavity[i-1][j] && cavity[i][j] > cavity[i+1][j] )
                {
                    cavity[i][j] = 'X';
                }
            } 
        }
    }
    
    for ( int i=0; i<n; i++ )
    {
        for( int j=0; j<n; j++ )
        {
            cout<<cavity[i][j];
        }
        cout<<endl;
    }
}
