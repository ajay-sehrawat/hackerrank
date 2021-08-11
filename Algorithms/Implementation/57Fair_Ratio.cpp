#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int b[n];
    for ( int i=0; i<n; i++ )
    {
        cin>>b[i];
    }
    
     //Run the code to n-1 as at last we can't check for the next position
    //Just update the number which is odd and then add +1 to its next number 
    //if the number at end is odd then we can't do it otherwise give the count;
    int count = 0;
    for ( int i=0; i<n-1; i++ )
    {
        if ( b[i]%2 != 0 )
        {
            b[i]++;
            b[i+1]++;
            count += 2;
        } 
    }
    if ( b[n-1]%2 != 0 )
    {
        cout<<"NO";
    }
    else {
    cout<<count;
    }
}
