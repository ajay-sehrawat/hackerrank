//Apple and orange problem 

#include <iostream>
using namespace std;
int main(){
    //Positon of respective objects
    int start_house, end_house, loc_app, loc_orge;
    cin>>start_house>>end_house;
    cin>>loc_app>>loc_orge;

    //No of apples and oranges
    int no_apple, no_orange;
    cin>>no_apple>>no_orange;

    //Falling distange of apples and oranges
    int dist_app[no_apple];
    for (int i=0; i<no_apple; i++){
        cin>>dist_app[i];
    }

    int dist_orge[no_orange];
    for (int i=0; i<no_orange; i++){
        cin>>dist_orge[i];
    }

    //adding trees distance
    for (int i=0; i<no_apple; i++){
        dist_app[i]=dist_app[i]+loc_app;
    }

    for (int i=0; i<no_orange; i++){
        dist_orge[i]=dist_orge[i]+loc_orge;
    }

    //Counting the apple fall in house region
    int count_app=0, count_org=0;
    for (int i=0; i<no_apple; i++){
        if( dist_app[i] >= start_house && dist_app[i] <= end_house)
        count_app++;
    }
    for (int i=0; i<no_orange; i++){
        if( dist_orge[i] >= start_house && dist_orge[i] <= end_house){
            count_org++;
        }

    }
    cout<<count_app<<endl;
    cout<<count_org;
    
}

