#include <bits/stdc++.h>

using namespace std;

int main()
{
    int games;
    cin>>games;
    while ( games-- > 0 )
    {
        int n, count = 0;
        cin>>n;
        char s[n];
        for ( int i=0; i<n; i++ )
        {
            cin>>s[i];
            if ( s[i] == '_' )
            {
                count++;
            }    
        }
        
        int count_c = 0;
        bool value = true;
        if ( count != 0 )
        {
            for ( int i=0; i<n; i++ )
            {
                count_c = 0;
                if ( s[i] != '_' )
                {
                    for ( int j=0; j<n; j++ )
                    {
                        if ( s[i] == s[j] ) {
                           count_c++;
                        }
                    }
                    if ( count_c <= 1 ) {
                        cout<<"NO"<<endl;
                        goto label1;
                    }
                }
            }
            cout<<"YES"<<endl;
        }
        else 
        {
            for ( int i=1; i<n-1; i++ )
            {
                if ( s[i] != s[i+1] && s[i] != s[i-1] )
                {
                    cout<<"NO"<<endl;
                    value = false;
                    break;
                }
            }
            if ( value )
            {
                if ( s[0] != s[1] || s[n-2] != s[n-1] )
                {
                    cout<<"NO"<<endl;
                }
                else if ( value )
                {
                    cout<<"YES"<<endl;
                }
            }      
        }
        label1:;
    }
}
