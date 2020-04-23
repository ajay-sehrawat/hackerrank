#include<iostream>
using namespace std;
int main()
{
    int n;
    float count1=0, count2=0, count3=0;
    cin>>n;
    float arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        //sum of positive numbers and their count
        if(arr[i]>0){
       // s1+=arr[i];
        count1++;
        }
        //sum of negative numbers and their count
        else if(arr[i]<0){
        //s2+=arr[i];
        count2++;
        }
        else
        count3++;
    }
    float x, y, z;
    x=float(count1/n);
    y=float(count2/n);
    z=float(count3/n);
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<z<<endl;
}

