//Bon Appetit
#include <iostream>
using namespace std;
int main()
{
    int n;//no of items
    int pos;
    cin>>n>>pos;
    
    int bill[n];
    for (int i=0; i<n; i++){
        cin>>bill[i];
    }
    int brian_bill;
    cin>>brian_bill;

    bill[pos] = 0;
    int sum=0;
    for ( int i=0; i<n; i++){
        sum = sum + bill[i];
    }
    int price=0;
    price = (sum/2); //n-1 as the item anna don't eat

    if(price == brian_bill){
        cout<<"Bon Appetit";
    }
    else{
        cout<<brian_bill-price;
    }
}


