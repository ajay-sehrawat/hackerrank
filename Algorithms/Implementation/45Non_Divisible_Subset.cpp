#include <bits/stdc++.h>
using namespace std;

//For any number K, the sum of 2 values (A & B) is evenly divisible by K if the sum of the 
//remainders of A/K + B/K is K. (There is also a special case where both A & B are evenly divisible, giving a sum of 0.)
//For any such remainder, there is 1 and only 1 other remainder value which will make a sum divisible by K.

int main(){
    int n,k;
    cin>>n>>k;
    long long int s[n];
//make an array which stores the remainders of various elements on division with k
    int rem[n];
//make an array to count the no. of occurences of the remainder terms
    int count[k+1]={0};

    for(int i=0;i<n;i++){
        cin>>s[i];
        rem[i]=s[i]%k;
        count[rem[i]]++;
    }
    int total=0;
    int state=0;
    for(int i=1;i<=k/2;i++){
        total+=max(count[i],count[k-i]);
    }
//if k is even, then count only one occurrence of remainder k/2.
//if there are any terms with remainder 0, count them only once
    if(k%2 == 0){
        total = total - count[k/2] + 1;
    }
    if(count[0]>=1)
        total++;
    cout<<total<<endl;
}
