#include <bits/stdc++.h>
using namespace std;

int main()
{
    //All ppossible magic squares
    int magic_square[8][3][3] = {
    {{8, 1, 6}, {3, 5, 7}, {4, 9, 2}},
    {{6, 1, 8}, {7, 5, 3}, {2, 9, 4}},
    {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}},
    {{2, 9, 4}, {7, 5, 3}, {6, 1, 8}}, 
    {{8, 3, 4}, {1, 5, 9}, {6, 7, 2}}, 
    {{4, 3, 8}, {9, 5, 1}, {2, 7, 6}}, 
    {{6, 7, 2}, {1, 5, 9}, {8, 3, 4}}, 
    {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}},
    };
    
    //Creating 2d array to take input
    int a[3][3];
    for ( int i=0; i<3; i++ )
    {
        for ( int j=0; j<3; j++ )
        {
            cin>>a[i][j];
        }
    }

    int min_cost = 81;   //Can take any number such that the magic square sum cant be greter than this
    for ( int k=0; k<8; k++ )
    {
        int creating_cost = 0;
        for ( int i=0; i<3; i++ )
        {
            for ( int j=0; j<3; j++ )
            {
                creating_cost += abs( a[i]j] - magic_square[k][i][j] );
            }
        }
        if ( creating_cost < min_cost )
        {
            min_cost = creating_cost;      //Testing for each case whichever lowest give output
        }
    }
    cout<<min_cost;
}

