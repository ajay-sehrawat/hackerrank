//Student test number pass or fail on less than 40 and round of in 5 muultiple 
//if 73 round to 75
//if 72 than print 72
//if less than 40 print number direct 
//but round of 38 to 40 as it will pass
#include <iostream>
using namespace std;
int main(){
    int n=0;
    cin>>n;
    int arr[n]; 
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    for (int i=0; i<n; i++){
        if(arr[i]>=38){
            int temp1, temp2;
            temp1 = arr[i];
            temp2 = temp1%5;
            if(temp2>2){
                cout<<arr[i]+(5-temp2)<<endl;
            }
            else
            {
                cout<<arr[i]<<endl;;
            }
            

        }
        else if(arr[i]<38){
            cout<<arr[i]<<endl;;
        }
    }
}
