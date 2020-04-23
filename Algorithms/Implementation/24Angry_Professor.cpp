//Angry Professor
#include <iostream>
using namespace std;
int main()
{
    int noOfCases;
    cin>>noOfCases;
    int students;
    int condition;
    int count = 0;
    for ( int i=0; i<noOfCases; i++)
    {
        cin>>students;
        cin>>condition;
        int attendence[students];
        for ( int j=0; j<students; j++)
        {
            cin>>attendence[j];
            if ( attendence[j] <= 0 )
            {
                count++;
            }
        }
        if ( count >= condition )
        {
            cout<<"NO"<<endl;  //Have to print NO for class not canceled;
        }
        else
        cout<<"YES"<<endl;
        count = 0;
    }
}
