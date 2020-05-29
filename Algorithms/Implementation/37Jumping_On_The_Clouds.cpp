//Jumping On The Clouds
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int noClouds, start = 0, count = 0;
    cin>>noClouds;
    int clouds[noClouds];
    for ( int i=0; i<noClouds; i++ )
    {
        cin>>clouds[i];
    }
    int i =0;
    do {
        if ( clouds[i+2] == 0 && (i+2)<noClouds )
        {
            i+=2;
            count++;
        }
        else if ( clouds[i+1] == 0 && (i+1)<noClouds )
        {
            i+=1;
            count++;
        }
        else
        break;
    }while( i<noClouds );
    cout<<count;
}


