//Append And Delete
//Case 10 is wrong reported.
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    int temp1 = 0, temp2 = 0, temp3 = 0;
    string intial;
    getline(cin,intial);
    int ilen = intial.length(); //Return exact number not 1 more as in array

    string desired;
    getline(cin,desired);
    int dlen  = desired.length();

    temp3 = ilen > dlen ? dlen : ilen; //smaller value to temp3

    int noMoves;
    cin>>noMoves;

    if ( intial == desired )
    cout<<"Yes";
    else
    {
        for ( int i=0; i<temp3; i++ )  //Loop for append and delete.
        {
            if ( intial.at(i) != desired.at(i) || i == (temp3-1) )
            {
                temp1 = ilen - i;
                temp2 = dlen - i;
                if ( noMoves >= (temp1+temp2))
                cout<<"Yes";
                else
                cout<<"No";
                break;
            }
            else
            continue;
        }
    }
}

