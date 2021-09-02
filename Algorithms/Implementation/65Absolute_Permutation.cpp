#include <bits/stdc++.h>
//My solution ran out of time in 3 cases
using namespace std;
/* First, there are two exception cases, like below:

1.k == 0: print all the numbers from 1 to N

2.if n%(2*k) is not ZERO, print -1 (as this must be zero to be abolute permutation), Another way to look at it is if n % (2*k) is not ZERO, print -1. That's because you'll need to "shuffle" groups of 2*k elements.

For example, when n = 8 and k = 2, you'll start off with [1,2,3,4,5,6,7,8] and shuffle groups of 4 like this:

1 and 3

2 and 4

-

5 and 7

6 and 8

Otherwise, follow the pattern below:

if we go from 1 to N (i),

Permutation is either i+k or i-k. It always starts with i+k.

1.Put i+k to permutaion for k times

2.Switch to i-k for k time */
int main()
{
    int t;
    cin>>t;
    while ( t-- > 0 )
    {
        int n, k ;
        cin>>n>>k;
        
        int arr[n], perm[n], count = 1;
    
        for ( int i=0; i<n; i++ )
        {
            arr[i] = count++;
        }
                    
        int l=0;
        
        if ( k==0 )
        {
            for ( int i=0;i<n; i++ )
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        else if ( n%(2*k) != 0 ) {
            cout<<"-1"<<endl;
        }
        else {
            bool add = true;
            for ( int i=1; i<=n; i++ )
            {
                if ( add )
                {
                    perm[l++] = i+k;
                }
                else {
                    perm[l++] = i-k;
                }
                
                if ( i%k == 0 )
                {
                    if ( add )
                        add = false;
                    else
                        add = true;
                }
            }
            for ( int i=0; i<l; i++ )
            {
                cout<<perm[i]<<" ";
            }
            cout<<endl;
        }
    }
    
}
