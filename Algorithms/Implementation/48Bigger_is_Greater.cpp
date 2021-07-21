#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    string t; //take it as string then converted to int
    getline(cin,t);
    int t_case = stoi(t); //string to int 
    /* the problem is that if you directly take input as int it will not work            because  The problem is that when cin >> t reads an integer, it reads only        the integer and leaves the next character (a newline) in the input buffer.        This newline is read by the next call to getline, which leads to confusion         about the operation of your program. */
    string str;
    int x = 0;
    while( x<t_case )
    { 
        getline(cin,str);
        bool val = next_permutation(str.begin(),str.end());
        if ( val == false )
            cout<<"no answer"<<endl;
        else {
        cout<<str<<endl;
        }
        x++;
    }
    
}
