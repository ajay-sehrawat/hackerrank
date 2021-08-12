#include <bits/stdc++.h>

using namespace std;

int main()
{
    int no_cases;
    cin>>no_cases;
    while ( no_cases > 0 )
    {
        int n,a,b;
        cin>>n>>a>>b;
        
        int sum = 0, temp, j = 0, sum1 = 0;
        //one thing to know is the order of output should be in ascending order
        for ( int i = n-1; i >= 0; i-- )
        {
            //for ascending order output
            sum = a < b ? (a*i) + (b*j) : (b*i) + (a*j);
            //to check for duplicates;
            if ( sum != sum1 )
            {
                sum1 = sum;
                cout<<sum1<<" ";
            }
            j++;
        }
        no_cases--;
        cout<<endl;
    }
}
