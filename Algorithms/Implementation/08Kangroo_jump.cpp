//Kangroo Jump problem

#include <iostream>
using namespace std;
int main(){
    int x1 ,v1, x2, v2;
    cin>>x1>>v1>>x2>>v2;
    for (int x=0; x<10000; x++){
        if( ((x1+(v1*x)) == (x2+(v2*x))))
        {
            cout<<"YES";
            //Return is to end the program here if this loop continue otherwise return N0
            return 0;
        }
    }
    cout<<"NO";

    
}

