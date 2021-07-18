#include<bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int boardSize, k;
    cin>>boardSize>>k;
    
    int queenX, queenY;
    cin>>queenY>>queenX;
    
    int obstacle[k][2];
    for ( int i=0; i<k; i++ )
    {
        for ( int j=0; j<2; j++ )
        {
            cin>>obstacle[i][j];
        }
    }
    
    //Top, right, bottom and left without obstacle
    int top = queenY - 1;
    int right = boardSize - queenX;
    int bottom = boardSize - queenY;
    int left = queenX - 1;
    
    int topLeft = min(top , left);
    int topRight = min(top , right);
    int bottomRight = min(bottom , right);
    int bottomLeft = min(bottom , left);

    //now for obstacles
    int pawnX,pawnY, j = 0;
    for ( int i = 0; i < k; i++ )
    {
        pawnY = obstacle[i][j];
        pawnX = obstacle[i][++j];
            //top
            if ( (pawnX == queenX) && (pawnY < queenY) )
            top = min(top, queenY - pawnY - 1);

            //right
            if ( (pawnY == queenY) && (pawnX > queenX) )
            right = min(right, pawnX - queenX -1);

            //bottom
            if( (pawnX == queenX) && (pawnY > queenY) )
            bottom = min(bottom, pawnY - queenY - 1);

            //Left
            if ( (pawnY == queenY) && (pawnX < queenX) )
            left = min(left, queenX - pawnX -1);

            //topLeft
            if ( (pawnX < queenX) && (pawnY < queenY) && (queenX - pawnX) == (queenY - pawnY))
            topLeft = min(topLeft, queenX - pawnX - 1);

            //topRRIGHT
            if( (pawnX > queenX) && (pawnY < queenY) && (pawnX - queenX) == (queenY - pawnY))
            topRight = min(topRight, pawnX - queenX -1 );

            //bottomRight
            if( (pawnX > queenX) && (pawnY > queenY) && (pawnX - queenX) == (pawnY - queenY))
            bottomRight = min(bottomRight, pawnX - queenX - 1);

            //bottomleft
            if( (pawnX < queenX) && (pawnY > queenY) && (queenX - pawnX) == (pawnY -queenY))
            bottomLeft = min(bottomLeft, queenX - pawnX - 1);
            
            j = 0;
    }
    //Output
    cout<<(top + right + bottom + left + topLeft + topRight + bottomRight + bottomLeft);
}
