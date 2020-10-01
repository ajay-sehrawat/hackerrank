#include <bits/stdc++.h>
#include<sstream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    string arr[n];  //array of size n as have to equal to number of contestent
    for ( int i=0; i<n; i++ )
    {
        cin>>arr[i];
    }
    //Applying bitwise OR and heart of code
    int topic_k=0, team = 0, max_b = 0;  //one for intial and one for match
    string temp; //to store bitwise OR answer
    for ( int i=0; i<n; i++ )
    {
        for ( int j=i+1; j<n; j++ )
        {
            for ( int k=0; k<m; k++ )
            {
                temp = (arr[i][k] | arr[j][k]);
                if ( temp == "1" )
                {
                    max_b++;
                }
            }
            if ( max_b > topic_k ){
                topic_k = max_b;
                team = 1;  //Have to reset team to 1 very imp as can find greater elemnet after finding 1st greaeter
            }
            else if ( max_b == topic_k ){
                team++;
            }
            max_b = 0;
        }
    }
    cout<<topic_k<<endl<<team;
}

