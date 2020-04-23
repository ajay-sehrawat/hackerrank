//Counting Values
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char c;
    int level=0, count=0;
    for (int i=0; i<n; i++)
    {
        cin>>c; //taking string word by word and checking
        if( c=='U'){
            level++;
        }
        else if(c=='D'){
            level--;
        }
        if( level == 0 && c=='U') //As c==U condition is imp acc to question;
		{
            count++;
        }

    }
    cout<<count;
}

