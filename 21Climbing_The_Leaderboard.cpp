//Climbinng The Leaderboard
//Program is write but time limit exists in 4 cases
#include <iostream>
using namespace std;
int main()
{
    //Players entries
    int  noPlayers;  //No of plyers in Leaderboard
    cin>>noPlayers;
    int scores[noPlayers];  //Players score in dec order
    int freq[noPlayers];
    int rank[noPlayers];
    for ( int i=0; i<noPlayers; i++)
    {
        cin>>scores[i];
        freq[i] = -1;
    }
    //Alice entries
    int alicePlays;
    cin>>alicePlays;
    int alice[alicePlays];
    for ( int i=0; i<alicePlays; i++)
    {
        cin>>alice[i];
    }
    //Setting freq of similaar numbers to zero
    for ( int i=0; i<noPlayers; i++)
    {
        if ( freq[i] != 0)
        {
        for ( int j=i+1; j<noPlayers; j++)
        {
            if ( scores[i] == scores[j] )
            {
                freq[j] = 0;
            }
        }
        }
    }
    //Ranking unequal numbers accordingly;
    int count = 1;
    for ( int i=0; i<noPlayers; i++)
    {
        if ( freq[i] != 0 )
        {
            rank[i] = count;
            count++;
        }
    }
    //Ranking equal numbers accordingly
    for ( int i=0; i<noPlayers; i++)
    {
        if ( freq[i] != 0)
        {
        for ( int j=i+1; j<noPlayers; j++)
        {
            if ( scores[i] == scores[j] )
            {
                rank[j] = rank[i];  
            }
        }
        }
    }
//Correct till here checked; Ranking Done of Players now rank alice
    int temp =0;
    for ( int i=0; i<alicePlays; i++)
    {
        temp = alice[i];
        for ( int j =0; j<noPlayers; j++)
        {
        if ( temp >= scores[j] )
        {
            cout<<(rank[j])<<endl; 
            break;
        }
        else if ( j == noPlayers-1 ) 
        {
            cout<<(rank[j]+1)<<endl;
            break;
        }
        }
    }
}
