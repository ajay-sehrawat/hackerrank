#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int c = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != ' ')
        {
            s[c] = s[i];
            c++;
        }
    }
    s[c] = '\0';

    //Root, floor and ceil value
    float v_root = sqrt(c);
    int x_ceil = ceil(v_root);
    int x_floor = floor(v_root);

    //to check if row * column > length(after removing spaces) given constraint
    if ((x_ceil * x_floor) < c)
    {
        x_floor++;
    }
    /*testin code
    cout << x_floor << endl
         << x_ceil << endl;*/

    //Lets break and store in a 2D array
    char str[x_floor][x_ceil];
    int k = 0;
    for (int i = 0; i < x_floor; i++)
    {
        for (int j = 0; j < x_ceil; j++)
        {
                str[i][j] = s[k];
                k++;
        }
    }

    //printing the encryption
    //Here we are iterating from clumns to rows first print the column[0] with all rows not the traditional way
    for (int i = 0; i < x_ceil; i++)
    {
        for (int j = 0; j < x_floor; j++)
        {
            if ( str[j][i] != '\0')
            cout << str[j][i];
        }
        cout <<" ";
    }
}
