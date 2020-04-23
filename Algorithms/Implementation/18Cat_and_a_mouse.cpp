//Cat And A Mouse
#include <cstdlib> //for abs function absolute
#include <iostream>
using namespace std;
int main()
{
    int query;
    cin>>query;
    int x[query], y[query], z[query];
    for (int i=0; i<query; i++){
        cin>>x[i]>>y[i]>>z[i];
    }
    for (int i=0; i<query; i++)
    {
        if( abs(z[i]-x[i]) < abs(z[i]-y[i]) )
        {
            cout<<"Cat A"<<endl;
        }
        else if( abs(z[i]-x[i]) > abs(z[i]-y[i]) )
        {
            cout<<"Cat B"<<endl;
        }
        else
        cout<<"Mouse C"<<endl;
    }
}

