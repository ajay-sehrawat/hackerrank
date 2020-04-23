#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int y=x;
    int arr[x][y];

    for(int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++)
        {
            cin>>arr[i][j];
        }
    }
    int sum1 = 0, sum2 = 0; 
  
    for (int i = 0; i < x; i++) 
    { 
        for (int j = 0; j < x; j++) 
        { 
            // finding sum of primary diagonal 
            if (i == j) 
                sum1 += arr[i][j]; 
  
            // finding sum of secondary diagonal 
            if (i == x - j - 1) 
                sum2 += arr[i][j]; 
        } 
    }
    cout<<abs(sum1-sum2);  //abs for absolute difference or mode
    return 0;
}

