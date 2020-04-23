//Birthaday Choclate
//Din't understood
#include <iostream>
using namespace std;
int main(){
    int no_squares;
    cin>>no_squares;
    int choclate[no_squares];

    for (int i=0; i<no_squares; i++) {
    cin>>choclate[i];
    }
    int birth_day, birth_month;
    cin>>birth_day>>birth_month;

    int sum=0, count=0;
    for (int i=0; i<no_squares; i++){
        sum=choclate[i];
        for(int j=i+1; j<birth_month; j++){
            sum=sum+choclate[j];
        }
        if (sum==birth_day)
        count++;
        birth_month++;
    }
    cout<<count;
}

