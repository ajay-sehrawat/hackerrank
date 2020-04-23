//Sock Merchant
#include <iostream>
using namespace std;
int main()
{
    int noOfSocks;
    cin >> noOfSocks;
    int arr[noOfSocks];
    for (int i = 0; i < noOfSocks; i++)
    {
        cin >> arr[i];
    }
    int tempSockName = 0;
    int count = 0;
    int socksCounts[noOfSocks];
    int socksName[noOfSocks];
    bool alreadyCounted = false;
    int socksIDCount = 0;
    for (int i = 0; i < noOfSocks; i++)
    {
        for (int k = 0; k <= socksIDCount; k++)
        {
            if (socksName[k] == -1)
            {
                break;
            }
            if (socksName[k] == arr[i])
            {
                alreadyCounted = true;
                break;
            }
        }
        if (alreadyCounted)
        {
            alreadyCounted = false;
            continue;
        }
        count = 0;
        tempSockName = arr[i];
        for (int j = 0; j < noOfSocks; j++)
        {
            if (tempSockName == arr[j])
            {
                count++;
            }
        }

        socksName[socksIDCount] = tempSockName;
        socksCounts[socksIDCount] = count;       
        socksIDCount++;
        
    }
    
    count = 0;
    for (int i = 0; i < socksIDCount; i++)
    {
        count = count + socksCounts[i] / 2;
    }
    cout<<count;
}

