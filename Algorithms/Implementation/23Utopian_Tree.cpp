//Utopian Tree
#include <iostream>
using namespace std;
int main()
{
    int noOfTest;
    cin>>noOfTest;
    int cycles;
    while ( cin>>cycles )
    {
        int i=1, height=1;
        while ( i<=cycles )
        {
            if( i%2 == 0)
            {
                height += 1;
            }
            else
            height *=2;
            i++;
        }
        cout<<height<<endl;
    }
}

