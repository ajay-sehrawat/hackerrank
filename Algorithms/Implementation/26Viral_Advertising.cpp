//Viral Advertising
#include <bits/stdc++.h>
using namespace std;

// Completing the viralAdvertising function from ques.
int viralAdvertising(int n) {
    int noOfDays = n;
    int shared=5, liked, cumulative=0;
    for ( int i=1; i<=noOfDays; i++)
    {
        liked = shared/2;
        cumulative = cumulative+liked;
        shared = liked*3;
        liked =0;
    }
    return cumulative;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = viralAdvertising(n);

    fout << result << "\n";

    fout.close();

    return 0;
}

