//Designe PDF Viewer
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int heights[26], albhabets[26], ascii, temp=0;
    for ( int i=0; i<26; i++)
    {
        cin>>heights[i];   
    }
    //Taking input of word character by character
    char c;
    int count=0, WordsAscii[10];
    int m = 0;
    while ( cin>>c )
    {
        count++;
        ascii = int(c);
        WordsAscii[m] = ascii - 97;  //-97 is done bcz to make it equal to the array address of height 
        m++;
    }
    int arr[m];
    for ( int i=0; i<m; i++)
    {
        arr[i] = heights[WordsAscii[i]];
    }
    temp = arr[0];
    for ( int i=0; i<m; i++)
    {
        if ( temp < arr[i] )
        {
            temp = arr[i];
        }
    }
    cout<<temp*count;
}

