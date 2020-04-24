//Jumping Over The CLouds: Revisted
//One thing is wrong in the ques is that in test cases it won't support the constraint of n%k = 0;
#include <iostream>
using namespace std;
int main()
{
    int noClouds, jump, energy = 100;
    cin>>noClouds>>jump;
    //Taking Clouds Type input
    int cloud[noClouds];
    for ( int i=0; i<noClouds; i++ )
    {
        cin>>cloud[i];
    }
    //Divinding in two parts
    if ( (noClouds % jump) == 0 )
    {
        for ( int i=0; i<noClouds; i++ )
        {
            if ( (i%jump) == 0 )
            {
                if ( cloud[i] == 0 )
                energy = energy - 1;
                else
                energy = energy - 3;
            }
        }
    }
    else
    {
        //As if noCloud%jump != 0 then it will again go in loop over the clouds,
        // So, I directly found the last cloud here where it will end in last
        noClouds = noClouds*jump;
        for ( int i =0; i<noClouds; i++ )
        {
            if ( i%jump == 0 )
            {
                if ( cloud[i] == 0 )
                energy = energy - 1;
                else
                energy = energy - 3;
            }
        }
    }
    cout<<energy;
}

