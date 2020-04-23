//Save The Priosner
//Worst Code Figure a more efficient Way
#include <iostream>
using namespace std;
int main()
{
    int testCase;
    cin>>testCase;
    long int noPrisoners, noSweets, startChair;
    long int candyCount;
    for ( int i=0; i<testCase; i++)
    {
        cin>>noPrisoners>>noSweets>>startChair;
        if ( noPrisoners == noSweets )
        {
            if( startChair == 1 )
            cout<<noPrisoners<<endl;
            else
            cout<<(startChair-1)<<endl;
        }
        else
        {
            candyCount = (noSweets%noPrisoners) + (startChair-1);
            if ( candyCount > noPrisoners )
            {
                cout<<(candyCount-noPrisoners)<<endl;
                candyCount = 0;
            }
            else if ( candyCount == 0)
            {
                cout<<noPrisoners<<endl;
            }
            else
            cout<<candyCount<<endl;
            candyCount = 0;
        }
    }
}

