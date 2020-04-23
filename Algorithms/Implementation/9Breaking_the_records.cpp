//Breaking The Record

#include <iostream>
using namespace std;
int main(){
    int NoOfGames;
    cin>>NoOfGames;

    int score[NoOfGames];
    for (int i=0; i<NoOfGames; i++){
        cin>>score[i];
    }

    int highest, lowest;
    highest=score[0];
    lowest=score[0];

    int count_high=0, count_low=0;

    for (int i=0; i<NoOfGames; i++){
        if(highest<score[i]){
            highest=score[i];
            count_high++;
        }
        else if (lowest>score[i]){
            lowest=score[i];
            count_low++;
        }
    }
    cout<<count_high<<" "<<count_low;

    
}

