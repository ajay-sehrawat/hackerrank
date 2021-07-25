#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin>>n>>t;
    int width[n], cases[t][2];
    for ( int i=0; i<n; i++ )
    {
        cin>>width[i];
    }
    int temp = 0;
  //We printed the output while inputs are coming
    for( int i=0; i<t; i++ )
    {
        for( int j=0; j<2; j++ )
        {
            cin>>cases[i][j];
        }
        temp = width[cases[i][0]];
        for ( int k= cases[i][0]; k<=cases[i][1]; k++ )
        { 
            if ( temp > width[k] )
            {
                temp = width[k];
            }
        }
        cout<<temp<<endl;
    }
    
}
