#include <bits/stdc++.h>

using namespace std;

//Heart -> If a container need to trade n balls from it with others then other container must have n number of balls for that conatiner type 
int main()
{
    int queries, c=0;
    cin>>queries;
    while ( c < queries )
    {
        int no_c;
        cin>>no_c;
        unsigned long long int  arr[no_c][no_c];
        for ( int i=0; i<no_c; i++ )
        {
            for ( int j=0; j<no_c; j++ ){
                cin>>arr[i][j];
            }
        }
        unsigned long long int sum1, sum2;
        int s_arr1[no_c], s_arr2[no_c];
        for ( int i=0; i<no_c; i++ )
        {
            sum1 = 0;
            sum2 = 0;
            for ( int j =0; j<no_c; j++ )
            {
                sum1 = sum1 + arr[i][j];
                sum2 = sum2 + arr[j][i];
            }
            s_arr1[i] = sum1;
            s_arr2[i] = sum2;
        }
        sort(s_arr1, s_arr1+no_c); 
        sort(s_arr2, s_arr2+no_c); 
        bool A = true;
        for ( int i =0; i<no_c; i++ )
        {
            if ( s_arr1[i] != s_arr2[i] ){
                cout<<"Impossible"<<endl;
                A = false;
                break;
            }
        }
        if ( A ){
            cout<<"Possible"<<endl;
        }

        //For next case test
        c++; //For while loop
        A = true; //For next case.
    }
}

