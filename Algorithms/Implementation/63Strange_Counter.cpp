#include <bits/stdc++.h>

using namespace std;

int main()
{
    long t, time = 1, p_time = 0, count = 0, value = 3, ans;
    cin>>t;
    bool label = true;
    while ( label)
    {
        if ( t >= time )
        {
            count++;
            p_time = time;
            time = (time*2) + 2;
        }
        else {
            label = false;
            
            for ( int i=1; i<count; i++ )
            {
                value = value * 2;
            }
            time = t - p_time;
            ans = value - time;
            cout<<ans;
        }      
    } 
}
