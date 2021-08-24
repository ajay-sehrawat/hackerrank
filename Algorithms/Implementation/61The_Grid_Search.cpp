//Took help from internet
#include <bits/stdc++.h>

using namespace std;

//the input array is string array so take iiput in char
int main()
{
    int t;
    cin>>t;
    while ( t>0 )
    {
        int r_g, c_g;
        cin>>r_g>>c_g;
        char grid[r_g][c_g];
        for ( int i=0; i<r_g; i++ )
        {
            cin>>grid[i];
        }
        int r_s, c_s;
        cin>>r_s>>c_s;
        char search[r_s][c_s];
        for ( int i=0; i<r_s; i++ )
        {
            cin>>search[i];
        }
        
        /*Lets write the heart
        r_g - r_s is beacuse running more than that makes no sense as 
        our search array row should be greater or equal to grid array row
        if our search array is bigger no sense in searching in grid
        
        Similarly for width also no need to check if search width is greater
        than grid width*/ 
        for ( int i =0; i<=r_g - r_s; i++ ) //Run loop in notebok 
        {
            for ( int j=0; j<=c_g - c_s; j++ )
            {
                for ( int a = 0; a<r_s; a++ )
                {
                    for ( int b=0; b<c_s; b++ )
                    {
                        if ( grid[i+a][j+b] != search[a][b] )
                        {
                            goto label1;
                        }
                    }    
                }
                cout<<"YES"<<endl;
                goto label2;
                label1:; //As we donn't want anything in label we just let it end
                //there so :; together and let the loop run
            }
        }
        cout<<"NO"<<endl;
        label2:; //As yes is printed for one input now lets get another input
        t--;
    }
}
