//Electronic Shop
#include <iostream>
using namespace std;
int main()
{
    int budget, no_key, no_mse;
    cin>>budget>>no_key>>no_mse;

    int key[no_key];
    for (int i=0; i<no_key; i++)
    {
        cin>>key[i];
    }
    int mse[no_mse];
    for (int i=0; i<no_mse; i++)
    {
        cin>>mse[i];
    }
    int sum=0, check=0;
    for(int i=0; i<no_key; i++)
    {
        for(int j=0; j<no_mse; j++)
        {
            sum = key[i]+mse[j];
            if( sum <= budget ){
                if(check <= sum)
                check = sum;
            }
            
        }
    }
    if( check == 0 )
    cout<<"-1";
    else
    cout<<check;
    return 0;
}


