//Repeated String
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int count = 0, temp = 0;
    string intial;
    getline(cin,intial);
    int ilen = intial.length();

    long long int noCharacters;
    cin>>noCharacters;

    long long int strRepeat = noCharacters/ilen; //noTimes string repeated
    long long int remainder = noCharacters%ilen; //remainder remained

    for ( int i=0; i<ilen; i++ )
    {
        if ( intial[i] == 'a' )   //Counting Number of 'a' in intial string
        {
            count++;
        }
    }
    if ( remainder == 0 )
    {
        cout<<(count*strRepeat); //Number of times * count
    }
    else
    {
        for ( int j=0; j<remainder; j++ )
        {
            if ( intial[j] == 'a' )  //Counting 'a' in remainder string
            {
                temp++;
            }
        }
        cout<<(count*strRepeat)+temp;
    }
    
}

