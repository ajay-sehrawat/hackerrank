//Divisible Sum Pairs
#include <iostream>
using namespace std;
int main(){
    int no, k;
    cin>>no>>k;
    int arr[no];
    for (int i=0; i<no; i++){
        cin>>arr[i];
    }
    
    int count=0;
    for (int i=0; i<no; i++){
        for (int j=0; j<no; j++){
            //Check the question asked is if i<j not arr[i] < arr[j]
            if (i<j && ((arr[i]+arr[j])%k) == 0) {
            count++;
            }
        }
    }
    cout<<count;
}

