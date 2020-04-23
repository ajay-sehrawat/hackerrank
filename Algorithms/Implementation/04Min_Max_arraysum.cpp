//Minimum maximum of a  5 value array with long int
#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    long long int min_Number, max_Number, temp1=0, temp2=0, sum1=0, sum2=0;

    temp1=arr[0];
    temp2=arr[4];
    for(int i=0; i<5; i++){
        if(temp1>=arr[i]){
            temp1=arr[i];
        }
        if(temp2<=arr[i]){
            temp2=arr[i];
        }
    }
    min_Number=temp1;
    max_Number=temp2;
    for(int i=0; i<5; i++){
        //Max Number Sum
        if(min_Number!=arr[i]){
            sum1=sum1+arr[i];
        }
        //Minimum Number Sum
        if(max_Number!=arr[i]){
            sum2=sum2+arr[i];
        }
        //this condition in for the case whe all input equal like 5 5 5 5 5;
        if(min_Number == max_Number && min_Number == arr[i]){
        	//here i=1 is there beacuse we only need to add 4 characterts not 5 in this case
            sum1=sum1+arr[i+1];
            sum2=sum1;
        }
    }
    cout<<sum2<<" "<<sum1;
    return 0;
}

