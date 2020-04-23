#include <iostream>
using namespace std;
int main()
{
    int no_birds;
    cin>>no_birds;
    int arr[no_birds];
    for (int i=0; i<no_birds; i++){
        cin>>arr[i];
    }

    int arr2[10]; //limit given above
    
    for (int i=1; i<=10; i++) {
        int count=0;
        for (int j=0; j<no_birds; j++) {

        //Sorting and searching at the same time
        if(arr[j] == i){
            count++;
        }
        arr2[i-1] = count;
        }
    }

    int max = arr2[0], loc=0;
    for (int i=0; i<10; i++){
        if(arr2[i]>max){
            max = arr2[i];
            loc = i;
        }
    }
    cout<<loc+1; //as computer location is 1 less than ours.
    return 0;
}


